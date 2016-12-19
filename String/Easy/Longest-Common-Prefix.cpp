

#include <bits/stdc++.h>


using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 10
#define col 10
#define MAX 10000
#define jora pair <int, int>
#define memo(arr, value) memset(arr, value, sizeof(arr))
#define pb push_back
#define eb emplace_back
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255
#define LIMIT 1000
#define MINX INT_MAX
#define MAXN INT_MIN

/*

// A Function to find the string having the minimum
// length and returns that length
int findMinLen ( string str[], int len ) {
    int i ;
    int minx = MINX;

    for ( i = 0; i < len; i++ ) {
        if ( str[ i ].length() < len )
            minx = str[ i ].length();
    }
}



bool allContainPrefix ( string strArr[], int len, string str, int start, int end ) {
    int i, j;
    for ( i = 0; i < len - 1; i++ ) {
        for ( j = start; j <= end; j++  ) {
            if ( strArr[ i ][ j ] != str[ j ] )
                return false;
        }
    }
    return true;
}

class Solution {
public:
    string longestCommonPrefix( string str[] ) {
        int i, j, len;
        //len = sizeof(str) / sizeof(str[ 0 ]);
        len = str.size();
        printf("Len -> %d\n", len );

        string prefix = "";
        int index = findMinLen( str, len );
        printf ("Index -> %d\n", index );

        int low = 0;
        int high = index;

        while ( low <= high ) {
            // Same as (low + high)/2, but avoids overflow
            // for large low and high
            int mid = low + ( high - low ) / 2;

            if ( allContainPrefix ( str, len, str[ 0 ], low, mid ) ) {
                // If all the strings in the input array contains
                // this prefix then append this substring to
                // our answer
                prefix += str[ 0 ].substr( low, mid - low + 1 ) ;

                // Go for the right side
                low = mid + 1;
            }
            else {
                // Go for the left side
                high = mid - 1;
            }
        }
        return prefix;
    }
};


int main () {
    string rans[ MAX ];


    int n, i, j;
    scanf ("%d", &n);
    for ( i = 0; i < n; i++ ) {
        cin >> rans[ i ];
    }


    Solution sol;
    string ans = sol.longestCommonPrefix ( rans );
    cout << ans;

    return 0;
}

*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        string a = "";
        string b = "";

        int len = strs.size(), i, j;
        printf("Len -> %d\n", len );

        if ( len == 0 ) return "";

        int tmp = strs[ 0 ].length();
        printf ("TMp -> %d\n", tmp );

        for ( i = 0; i < tmp; i++ ) { //  finding shortest string length from vector
            for ( j = 1; j < len; j++ ) {           // iteration over every element of the string vector
                a += strs[ j ][ i ];
                b += strs[ 0 ][ i ];
                cout << a << " " << b;
                NL;
                if ( strs[ j ][ i ] != strs[ 0 ][ i ] )
                    return prefix;
            }
            prefix += strs[ 0 ][ i ];
        }
        return prefix;
    }
};

int main () {
    string rans;
    string ch = "";
    vector < string > strVt;

    int n, i, j;
    scanf ("%d", &n);
    for ( i = 0; i < n; i++ ) {
        cin >> rans;
        strVt.pb( rans );
    }
    int len = strVt.size();
    printf ("Len - > %d\n", len );
    int tmp = strVt[ 0 ].length();
    printf ("TMp -> %d\n", tmp );

    for ( i = 0; i < len; i++) {
        for ( j = 1; j < tmp; i++ ) {
            ch += strVt[ j ][ i ];
            cout << ch;
            NL;
        }
    }

//    Solution sol;
//    string ans = sol.longestCommonPrefix ( strVt );
//    cout << ans;

    return 0;
}


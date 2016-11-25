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



class Solution {
public:
    string convert ( string s, int n ) {
        int len = s.size(), i, j, tmp;
        vector < string > zz( n, "") ;
        string ans;

        if ( n == 1 ) {
           //cout << s;
           return s;
        }

        int r = 0;
        bool down;
//        zz.clear();

        for ( i = 0; i < len; i++ ) {
            zz[ r ].pb( s[ i ] );
            //zz[ r ] += s[ i ];
            // If last row is reached, change direction to 'up'
            if ( r == n - 1 ) down = false;

            // If 1st row is reached, change direction to 'down'
            else if ( r == 0 ) down = true;

            if ( down ) r++;
            else r--;
        }
        //for ( i = 0; i < n; i++ ) cout << ans[ i ];

        //int lenZZ = zz[n].size();
        //printf ("LenZZ -> %d\n", lenZZ );
        for ( i = 0; i < zz.size(); i++ ) {
            for ( j = 0; j < zz[ i ].size(); j++ ) {
                //int lenZZ = zz[ i ].size();
                //printf ("LenZZ -> %d\n", lenZZ );
                ans += zz[ i ][ j ];
            }
        }
        return ans;
    }
};


int main () {
    string str;
    cin >> str;
    int n;
    scanf ("%d", &n);

    int len = str.size();
    string res[ len ];

    Solution sol;
    cout << sol.convert( str, n );
    return 0;
}


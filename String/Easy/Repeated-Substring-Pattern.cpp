


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


class Solution {
public:

    void calculateLPS ( string str, int M, int lps[] ) {
        int len = 0; //length of the previous longest prefix suffix
        int i;

        lps[ 0 ] = 0; //lps[ 0 ] is always 0
        i = 1;

        // the loop calculate lps[ i ] for i = 1 to M - 1
        while ( i < M ) {
            if ( str[ i ] == str[ len ] ) {
                len++;
                printf ("Len of previous longest prefix %d\n", len );
                lps[ i ] = len;
                i++;
            }
            else {
                if ( len != 0 ) {
                    // This is tricky case. Consider the example AAACAAAA
                    // and i = 7
                    len = lps[ len - 1 ];
                }
                else {
                    lps[ i ] = 0;
                    i++;
                }
            }
        }
    }

    bool repeatedSubstringPattern(string str) {
        int n = str.size();
        int lps[ n ];

        // Preprocess the pattern calculate lps array
        calculateLPS( str, n, lps );

        // Find length of longest suffix which is also prefix of str
        int len = lps[ n - 1 ];
        printf ("Len of prefix lps array -> %d\n", len);\

        // If there exist a suffix which is also prefix AND
        // Length of the remaining substring divides total
        // length, then str[0..n-len-1] is the substring that
        // repeats n/(n-len) times (Readers can print substring
        // and value of n/(n-len) for more clarity.

        if ( len > 0 && n % ( n - len ) == 0 )
            return true;
        else
            return false;
    }
};

int main () {
    string a;

    cin >> a;

    Solution sol;

    cout << sol.repeatedSubstringPattern( a );
    return 0;
}

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
    int compareVersion ( string ver1, string ver2 ) {
        int vnum1 = 0, vnum2 = 0;
        int i = 0;
        int j = 0;

        while ( i < ver1.size() || j < ver2.size() ) {

            // storing numeric part of ver 1 in vnum1
            while ( i < ver1.size() && ver1[ i ] != '.' ) {
                vnum1 = vnum1 * 10 + ( ver1[ i ] - '0' );
                //printf ("Vnum1 -> %d\n", vnum1 );
                i++;
            }

            // storing numeric part of ver 2 in vnum2
            while ( j < ver2.size() && ver2[ j ] != '.' ) {
                vnum2 = vnum2 * 10 + ( ver2[ j ] - '0' );
               // printf ("Vnum2 -> %d\n", vnum2 );
                j++;
            }

            if ( vnum1 > vnum2 )
                return 1;
            if ( vnum1 < vnum2 )
                return -1;

            //  if equal, reset variables and go for next numeric part
            vnum1 = vnum2 = 0;
            i++;
            j++;
        }
        return 0;
    }
};


int main () {
    string v1;
    string v2;

    cin >> v1;
    cin >> v2;

    Solution sol;
    cout << sol.compareVersion( v1, v2 ) << endl;
    return 0;
}

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



int thirdMax ( vector < int >& vt ) {
    int len = vt.size();
    int i, j, indx=0;
    vector < int > ans;

    for ( i = 0; i < len; i++ ) {
        for ( j = 0; j < indx; j++ )
            if ( vt[ i ] == ans[ j ] ) break;

        if ( j == indx ) {
            ans.pb( vt[ i ] );
            indx++;
        }
    }

    //sort( ans.begin(), ans.end() );
    int ansLen = ans.size();

    for ( i = 0; i < ansLen; i++ ) printf("%d ", ans[ i ] );
    NL;

    int res;

    if ( ansLen < 3 )
        res = max ( ans[ 0 ], ans[ 1 ] );
    else
        res = ans[ ansLen - 1 ];

    return res;
}




int main () {
    int n, i, j, arr[ MAX ], k, num, ans = 0;
    vector < int > vt;
    vector < int > res;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++) {
        scanf ("%d", &num );
        res.pb(num);
    }

    printf ("%d\n", thirdMax ( res ) );

    return 0;
}




class Solution {
public:
    int thirdMax(vector<int>& vt) {
        int len = vt.size();
        int i, j, indx=0;
        vector < int > ans;

        for ( i = 0; i < len; i++ ) {
            for ( j = 0; j < indx; j++ )
                if ( vt[ i ] == ans[ j ] ) break;

            if ( j == indx ) {
                //ans[ indx++ ] = vt[ i ];
                ans.pb( vt[ i ] );
                indx++;
            }
        }

        sort( ans.begin(), ans.end() );
        int ansLen = ans.size();
        int res;

        if ( ansLen < 3 )
            res = max ( ans[ 0 ], ans[ 1 ] );
        else
            res = ans[ ansLen - 3 ];

        return res;
    }
};

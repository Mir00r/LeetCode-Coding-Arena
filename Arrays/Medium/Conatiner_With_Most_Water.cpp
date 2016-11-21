
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
    int maxArea(vector<int>& height) {
        int len = height.size();
        int beg = 0;
        int end = len - 1;
        int maxn = 0;

        if ( height.empty() )
            return 0;
        /*else if ( len == 2 )
            return min ( height[ 0 ] , height[ len - 1 ] );*/
        else {
            while ( beg < end ) {
                int diff = end - beg;
                int heightMaxn = min ( height[ beg ], height[ end ] );
                maxn = max ( maxn, diff * heightMaxn );

                if ( height[ beg ] < height[ end ] ) beg++;
                else end--;
            }
            return maxn;
        }
    }
};











int maxArea( vector < int >& height) {
    int len = height.size();
    int beg = 0;
    int end = len - 1;
    int maxn = 0;

    if ( height.empty() )
        return 0;
    else {
        while ( beg < end ) {
            int diff = end - beg;
            int heightMaxn = min ( height[ beg ], height[ end ] );
            maxn = max ( maxn, diff * heightMaxn );

            if ( height[ beg ] < height[ end ] ) beg++;
            else end--;
        }
    }
    return maxn;
}

int main () {
    int n, i, arr[ MAX ], k, num, ans = 0;
    vector < int > vt;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++) {
        scanf ("%d", &num );
        vt.pb(num);
//        scanf ("%d", &arr[ i ] );
    }

    printf ("Result -> %d\n", maxArea( vt ) );
    return 0;
}

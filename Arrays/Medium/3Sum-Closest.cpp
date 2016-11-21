
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
    int threeSumClosest(vector<int>& nums, int target) {
        int i, j, len, start, end, res, tmp;

        sort(nums.begin(), nums.end() );
        len = nums.size();
        res = nums[ 0 ] + nums[ 1 ] + nums[ 2 ];
       // printf ("n1 -> %d   n2 -> %d    n3 -> %d    and     res = %d\n", nums[ 0 ], nums[ 1 ], nums[ 2 ], res );

        for ( i = 0; i < len; i++ ) {
            start = i + 1;
            end = len - 1;

            while ( start < end ) {
                int a = abs( res - target ) ;
                //printf ("A -> %d\n", a );
                int b = abs ( nums[ i ] + nums[ start ] + nums[ end ] - target );
                //printf ("b1 -> %d   b2 -> %d    b3 -> %d    and     B = %d\n", nums[ i ], nums[ start ], nums[ end ], b );
                int c = nums[ i ] + nums[ start ] + nums[ end ];
                //printf ("c1 -> %d   c2 -> %d    c3 -> %d    and     C = %d\n", nums[ i ], nums[ start ], nums[ end ], c );

                if ( a > b ) {
                    res = nums[ i ] + nums[ start ] + nums[ end ];
                }

                if ( c < target ) {
                    start++;
                }
                else {
                    end--;
                }

            }
        }
        return res;

    }
};

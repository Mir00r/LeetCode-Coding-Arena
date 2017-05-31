
#include <bits/stdc++.h>


using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 100
#define col 100
#define MAX 100000
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
    int mySqrt(int x) {
        double low = 0.0;
        double high = x;
        double mid;
        int i;

        if ( x == 0 ) return x;
        if ( x == 1 ) return x;

        //while ( high - low > .0001 ) {
        for ( i = 0; i < 100; i++ ) {
            mid = ( low + high ) / 2;

            //printf ("low ------ > %.2lf\n", low );
            //printf ("high ------ > %.2lf\n", high );
            //printf ("mid ------ > %.2lf\n", mid );

            if ( mid * mid > x ) {
                high = mid;
            }
            else {
                low = mid;
            }

            //printf ("MID ------ > %lf\n", mid );
            //printf ("MID * MID ------ > %lf\n", mid*mid );
        }
        return (int)mid;
    }
};

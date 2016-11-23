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

#define pb push_back

class Solution {
public:
    vector < vector < int > > fourSum( vector < int >& num, int target) {
        int i, j, len, len2, len3, start, end, sum;
        vector< vector < int > > result;
        vector < int > tmp;

        sort(num.begin(), num.end());
        len3 = num.size() - 3;
        len2 = num.size() - 2;
        len = num.size() - 1;

        for ( i = 0; i < len3; i++) {
            if (i > 0 && num[ i ] == num[ i - 1 ] ) {
                continue;
            }

            for ( j = i + 1; j < len2; j++ ) {

                if ( j != i + 1 && num[ j ] == num[ j - 1 ] ) continue;
                sum = target - num[ i ] - num[ j ];
                //printf ("Sum -> %d\n", sum );

                // Calculate 2sum again ;
                start = j + 1 ;
                end = len ;

                while (start < end) {
                    if ( num[ start ] + num[ end ] == sum ) {
                        tmp.clear();

                        tmp.pb( num[ i ] );
                        tmp.pb( num[ j ] );
                        tmp.pb( num[ start ] );
                        tmp.pb( num[ end ] );

                        result.pb( tmp );

                        start++;
                        end--;

                        while ( start < end && num[ start ] == num[ start - 1 ] ) start++;
                        while ( start < end && num[ end ] == num[ end + 1 ] ) end--;
                    }
                    else {
                        if ( num[ start ] + num[ end ] > sum ) end--;
                        else start++;
                    }
                }

            }

        }
        return result;
    }
};



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
    vector<vector < int > > threeSum(vector < int >& num) {

        int i, len, start, end, target;
        vector<vector<int> > result;

        sort(num.begin(), num.end());
        len = num.size();

        for ( i = 0; i < len; i++) {
            if (i > 0 && num[ i ] == num[ i - 1 ] ) {
                continue;
            }
            // 2sum;
            start = i + 1 ;
            end = len - 1;
            target = -num[i];

            while (start < end) {
                if (start > i + 1 && num[ start - 1 ] == num[ start ] ) {
                    start++;
                    continue;
                }
                if (num[ start ] + num[ end ] < target) {
                    start++;
                } else if ( num[ start ] + num[ end ] > target) {
                    end--;
                } else {
                    vector < int > triplate;
                    triplate.pb( num[ i ] );
                    triplate.pb( num[ start ] );
                    triplate.pb( num[ end ] );
                    result.pb( triplate );
                    start++;
                }
            }
        }

        return result;
    }
};

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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int e = numbers.size() - 1;
        int mid, i;
        vector < int > res;
        int sum = 0;

        while ( s <= e ) {

            sum = numbers[ s ] + numbers[ e ];

            if ( sum == target ) {
                res.pb(s+1);
                res.pb(e+1);
                break;
            }
            else if ( sum > target ) {
                e--;
            }
            else {
                s++;
            }


//            mid = ( s + e ) / 2;
//            printf ("MID -> %d\n", mid);
//
//            sum = numbers[ mid ] + numbers[ mid - 1 ];
//
//            if ( sum == target ) {
//                res.pb( mid );
//                res.pb( mid + 1 );
//                break;
//            }
//            else if ( sum < target ) {
//                s = mid + 1;
//            }
//            else {
//                e = mid - 1;
//            }
        }
        return res;
    }
};

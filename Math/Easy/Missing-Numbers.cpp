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
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int tot_sum = len * ( len + 1 ) / 2;
        int i, sum = 0;
        int res;

        for ( i = 0; i < len; i++ )
            sum += nums[ i ];
        res = abs(sum - tot_sum);
        return res;
    }
};


int main () {
    int n, num;
    vector < int > vt;
    scanf ("%d", &n);
    while ( n-- ) {
        scanf ("%d", &num);
        vt.pb(num);
    }
    Solution sol;
    cout << sol.missingNumber( vt ) << endl;
    return 0;
}

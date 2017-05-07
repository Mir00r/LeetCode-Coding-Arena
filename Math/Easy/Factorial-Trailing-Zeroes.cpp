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
    int trailingZeroes(int n) {
        int i, ans=0;

//        for ( i = 5; n / i >= 1; i *= 5 ) {
//
//            ans += n / i;
//        }

        while ( n ) {
            ans += n / 5;
            n /= 5;
        }

        return ans;
    }
};

int main () {
    int n, tc ;

    scanf("%d", &tc);
    Solution sol;

    while ( tc-- ) {
        scanf("%d", &n);
        cout << sol.trailingZeroes( n ) << endl;
    }
    return 0;
}

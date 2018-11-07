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
#define null NULL



class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector < int > vt;
        for (int i = 0; i < A.size(); i++) {
            if(A[i] % 2 == 0){
                vt.pb(A[i]);
            }
        }

        for (int i = 0; i < A.size(); i++) {
            if(A[i] % 2 != 0){
                vt.pb(A[i]);
            }
        }
        return vt;
    }
};

int main () {

    int i, n, t, num, tc;
    vector < int > vt;
    vector < int > ans;
    Solution sol;

    scanf("%d", &tc);

    while ( tc-- ) {
        scanf("%d", &n );

        for ( i = 0; i < n; i++ ) {
            scanf("%d", &num);
            vt.pb(num);
        }
        ans = sol.sortArrayByParity(vt);
        for (i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        NL;
    }
    return 0;
}

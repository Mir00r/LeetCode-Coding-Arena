
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
    int peakIndexInMountainArray(vector<int>& A) {
        int low = 0;
        int high = A.size() - 1;
        int mid, ans=0;

        /*while ( A[ans] < A[ans + 1] ) ans++;
        return ans;*/

         while ( low < high ) {
            mid = low + ( high - low ) / 2;
            if (A[mid] < A[mid + 1]) {
                low = mid + 1;
            } else{
                high = mid;
            }
        }
        return low;
    }
};

int main () {

    int i, n, t, num, tc;
    vector < int > vt;
    vector < int > ans;
    Solution sol;

    scanf("%d", &tc);

    while ( tc-- ) {
        //scanf("%d %d", &n, &t);

        scanf("%d", &n );

        for ( i = 0; i < n; i++ ) {
            scanf("%d", &num);
            vt.pb(num);
        }
        cout << sol.peakIndexInMountainArray(vt) << endl;
    }
    return 0;
}

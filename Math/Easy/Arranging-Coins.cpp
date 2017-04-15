#include <bits/stdc++.h>


using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 100
#define col 100
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
    int arrangeCoins(int n) {
        int i, j;
        int tmp = n, ans = 0;
        int tmpAns = 0;

        i = 1;
        while (1) {
            n -= i;
            if ( n < 0 ){
                return tmpAns;
                break;
            }
            if ( n == 0 ){
                return i;
                break;
            }
            tmpAns = i;
            i++;
        }

        //return tmpAns;
    }
};


int main () {
    int n, num;
    vector < int > vt;
    scanf ("%d", &n);
    Solution sol;

    while ( n-- ) {
        scanf ("%d", &num);
        //vt.pb(num);
        cout << sol.arrangeCoins( num ) << endl;
    }


    return 0;
}

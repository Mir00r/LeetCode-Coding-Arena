

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

    bool isAlpa ( char ch ) {
        if ( ( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) )
            return true;
        else
            return false;
    }

    int lengthOfLastWord(string s) {
        int len = s.size() - 1;
        int i;
        int ans = 0;

        for ( i = len; i >= 0; i-- ) {
            if ( s[ i ] == ' ' ) {
                //break;
                if ( ans == 0 )
                    continue;
                else
                    return ans;
            }
            //else ( isAlpa( s[ i ] ) ) ans++;
            ans++;
        }

        return ans;
    }
};


int main () {
    string a;

    cin >> a;

    Solution sol;
    int ans = sol.lengthOfLastWord( a );

    cout << ans;
    return 0;
}

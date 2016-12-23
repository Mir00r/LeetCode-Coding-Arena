
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
    string addBinary(string a, string b) {
        int lenA = a.size() - 1;
        int lenB = b.size() - 1;
        int i, j, sum = 0;
        string res = "";

        while ( lenA >= 0 || lenB >= 0 || sum == 1 ) {

            // Comput sum of last digits and carry
            if ( lenA >= 0 ) {
                sum += a[ lenA ] - '0';
            }
            else {
                sum += 0;
            }

            if ( lenB >= 0 ) {
                sum += b[ lenB ] - '0';
            }
            else {
                sum += 0;
            }


            // If current digit sum is 1 or 3, add 1 to result
            //res += char( sum % 2 + '0' );
            res = char( sum % 2 + '0' ) + res;

            // Compute carry
            sum /= 2;

            lenA--; lenB--;
        }
        //reverse(res.begin(), res.end());
        return res;
    }
};


int main () {
    string a;
    string b;

    cin >> a;
    cin >> b;

    Solution sol;
    string ans = sol.addBinary( a, b );

    cout << ans;
    return 0;
}

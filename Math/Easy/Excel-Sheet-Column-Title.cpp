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
    string convertToTitle(int n) {
        char str[ CharRange ];
        int i = 0, rem;

        while ( n > 0 ) {
            rem = n % 26;

            // If remainder is 0, then a 'Z' must be there in output
            if ( rem == 0 ) {
                str[ i++ ] = 'Z';
                n = ( n / 26 ) - 1 ;
            }
            else {
                str[ i++ ] = rem - 1 + 'A';
                n /= 26;
            }
        }

        str[i] = '\0';
        reverse(str, str + strlen(str));
        return str;
    }
};


int main () {
    int n, tc ;

    scanf("%d", &tc);
    Solution sol;
    string s;

    while ( tc-- ) {
        scanf("%d", &n);
        //cin >> s;
        cout << sol.convertToTitle( n ) << endl;
    }
    return 0;
}

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



class Solution {
public:
    int romanToInt ( string s ) {
        int len = s.size(), i;
        map < char, int > mp;

        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = mp[ s[ len - 1 ] ];
        char ch = mp[ s[ len - 1 ] ];
        printf ("Ans -> %d\n", ans );
        printf("Roman Char -> %c\n", &ch );

        for ( i = len - 2; i >= 0; i-- ) {
            if ( mp[ s[ i ] ] < mp[ s[ i + 1 ] ] )
                ans -= mp[ s[ i ] ];
            else
                ans += mp[ s[ i ] ];

        }
        return ans;
    }
};


int main () {
    string str;
    cin >> str;

    Solution sol;
    cout << sol.romanToInt( str );
    return 0;
}


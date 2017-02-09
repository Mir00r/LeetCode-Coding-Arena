
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
    int strStr(string haystack, string needle) {
        int Hlen = haystack.size();
        int Nlen = needle.size();
        int i, j;
        int diff = Hlen - Nlen;
        printf("Diff -> %d\n", diff);

        for ( i = 0; i <= diff; i++ ) {
            for ( j = 0; j < Nlen; j++ )
                if ( haystack[ i + j ] != needle[ j ] )
                    break;
            if ( j == Nlen )
                return i;
        }
        return -1;
    }
};

int main () {
    string a;
    string b;

    cin >> a;
    cin >> b;

    Solution sol;

    cout << sol.strStr( a, b );
    return 0;
}

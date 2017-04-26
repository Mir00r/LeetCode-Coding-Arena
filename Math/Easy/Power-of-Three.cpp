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

    int isPowerOfThree2(int n) {
        if (n < 1) {
            return 0;
        }

        while (n % 3 == 0) {
            n /= 3;
        }

        return n == 1;
    }

    int isPowerOfThree(int n) {
        int tmp = log( n ) / log( 3 );
        //double tmp = log10( n ) / log10( 3 );
        printf( "TMp -> %d\n", tmp );

        if ( tmp == 3 ) return 1;
        else return 0;
    }
};

int main () {
    int n, num;
    vector < int > vt;
    scanf ("%d", &n);
    Solution sol;

    string num1, num2;


    while ( n-- ) {
        //scanf ("%d", &num);
        //vt.pb(num);

        cin >> num;
        cout << sol.isPowerOfThree2( num ) << endl;
    }


    return 0;
}


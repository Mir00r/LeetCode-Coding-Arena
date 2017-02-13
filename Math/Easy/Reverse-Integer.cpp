
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
    int numberOfDigit ( int n ) {
        int cnt = 0;

        while ( n != 0 ) {
            n /= 10;
            cnt++;
        }
        return cnt;
    }

    int reverse(int n) {
        int rev = 0;
        int modu, len = 0, tmp;

//        if ( n > 0 ){
//            len = numberOfDigit( n );
//            //printf ("Len -> %d\n", len );
//        }
//
//        if ( len > 9 ) return 0;
//        else {
//            puts("Else IN");
            while ( n != 0 ) {
                //rev *= 10;
                tmp = rev * 10 + n % 10 ;
                printf ("Tmp ---> %d\n", tmp );


                n /= 10;

                int tmp_st = tmp / 10;
                printf("Tmp_ST -----> %d\n", tmp_st );
                printf ("Rev -------------> %d\n", rev );

                if ( tmp_st != rev ) {
                    rev = 0;
                    break;
                }
                rev = tmp;
            }
            return rev;
        //}

    }
};

int main () {
    int tc, num;

    scanf ("%d", &tc);
    while ( tc-- ) {
        cin >> num;
        Solution sol;
        cout << sol.reverse( num ) << endl;
    }
    return 0;
}

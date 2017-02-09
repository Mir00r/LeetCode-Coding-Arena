
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

    int addDigits(int num) {
        int ans = 0;

        if ( num < 9 )
            return num;
        else {
            //ans = DigitSum(num);
            int sum = 0, d, tmp = 0, mod;

            d = num % 10;
            sum += d + addDigits( num / 10 );
            //printf("Sum Section One ------>>>> %d\n ", sum );

            if (sum > 9){
                mod = sum % 10;
                tmp += mod + addDigits( sum / 10 );
                //printf("Sum Section Sec ------>>>> %d\n ", tmp );
                return tmp;
            }
            return sum;
        }
    }
};


int main () {
    int tc, num;

    scanf ("%d", &tc);
    while ( tc-- ) {
        cin >> num;
        Solution sol;
        cout << sol.addDigits( num ) << endl;
    }
    return 0;
}

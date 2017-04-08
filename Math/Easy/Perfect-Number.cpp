
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
    int checkPerfectNumber(int num) {
        int i=1;
        int sum = 0;

//        while ( i < num ){
//            if ( num % i == 0 ) sum += i;
//            i++;
//        }

//        for ( int j = 2; j <= num / 2; j++ ) {
//            if ( num % j == 0 )
//                sum += j;
//        }

        if ( num <= 0 ) return false;
        int j, tmp;
        for ( j = 1; j*j < num; j++ ) {
            if ( num % j == 0 ) {
                sum += j ;
                printf ("First Sum -> %d\n", sum);
                //num /= j;
                tmp = num / j;
                printf ("Num -> %d\n", tmp);
                sum += tmp;
                printf ("Second Sum -> %d\n", sum);
            }
        }

        //adjust sum to get rid of the extra addition
        //for example when num=100, need to add 10 to sum
        //sum = (1,100) + (2,50) + (4,25) + (5,20) + 10 - 100
        printf ("j * j koto -> %d\n", j * j);
        if(j*j == num) {
            sum = sum + j - num;
            printf("IF SUM -> %d\n", sum);
        }
        else{
            sum -= num;
            printf("ELSE SUM -> %d\n", sum);
        }
        //return num == sum;

        if ( sum == num ) return 1;
        else return 0;
    }
};


int main () {
    int n, num;
    vector < int > vt;
    scanf ("%d", &n);
//    while ( n-- ) {
//        scanf ("%d", &num);
//        vt.pb(num);
//    }
    Solution sol;
    cout << sol.checkPerfectNumber( n ) << endl;
    return 0;
}



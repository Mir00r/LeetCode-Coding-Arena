
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
#define NL puts ("")
#define inf (1 << 28)
#define eps 1e9
#define MOD 7477777
#define PI 3.1415926535897932384626433832795
#define PrimeRange 1000000
#define CharRange 255
#define LIMIT 1000



// Main solution

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int len , i, sum = 0, pre = 0, res = -999999, indx = 1;

        len = A.size();

        for ( i = 0; i < len; i++ ) {
            pre += A[ i ] * i;
            sum += A[ i ];
        }
        /*printf ("Pre = %d   Sum = %d\n", pre, sum );*/
        res = pre;

        for ( i = 1; i < len; i++ ) {
            pre = sum + pre - len * A[ len - i ];
            //pre = res;
            /*printf ("Loop -> Resu => %d\n", res );*/

            res = max ( res, pre );
        }

        return res;
    }
};













void moveZeroes(vector<int>& nums) {
    int i, len;
    len = nums.size();
    int left = 0, right = 0;

    while ( right < len ) {
        if ( nums[ right ] ) {
            printf ("%d\n", nums[ right ] ) ;
            swap ( nums[ left++ ], nums[ right ] );
        }
        right++;
    }
}

void leftRoted ( int arr[], int n ) {
    int i, tmp;

    tmp = arr[ n - 1 ];
    for ( i = n - 1; i > 0; i-- ) {
        arr[ i ] = arr[ i - 1 ];
//        arr[ i ] = tmp;
    }
    arr[ i ] = tmp;
}

int sumFunction ( int arr[], int n ) {
    int i, sum = 0;

    for ( i = 0; i < n; i++ )
        sum += ( i * arr[ i ] );

    return sum;
}


void printArray( int arr[], int n ) {
    int i;
    for ( i = 0; i < n; i++) printf ("%d ", arr[ i ] );
    NL;
}


void maxRotateFunction ( int arr[], int n ) {
    int i, pre = 0, sum = 0, maxn = -99999, indx = 1, res;

    for ( i = 0; i < n; i++ ) {
        pre += arr[ i ] * i;
        sum += arr[ i ];
    }
    printf ("Pre = %d   Sum = %d\n", pre, sum );
//    maxn = max ( pre, maxn );

    maxn = pre;
    while ( indx < n ) {
//        res = sum + pre - n * arr[ n - indx ];
        printf ("Array Elem ------> %d\n", arr[ n - indx ] );
        pre = sum + pre - n * arr[ n - indx ];
        printf ("Loop -> Resu => %d     Maxn -> %d\n", res, maxn );
        maxn = max ( maxn, pre );
       // pre = res;
//        printf ("Loop -> Pre => %d\n", pre );
        indx++;
    }
    printf ("Max Result -> %d\n", maxn );
}

int main () {
    int n, i, arr[ MAX ], k, num, ans = 0;
    vector < int > vt;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++) {
//        scanf ("%d", &num );
//        vt.pb(num);
        scanf ("%d", &arr[ i ] );
    }

    maxRotateFunction( arr, n );

//    moveZeroes( vt );

//    for ( i = 0; i < n; i++) {
//        leftRoted( arr, n );
//        //printArray( arr, n );
//        int getSum = sumFunction( arr, n );
//        ans = max ( ans, getSum );
//    }
//
//
//    printf ("%d\n", ans);
    return 0;
}


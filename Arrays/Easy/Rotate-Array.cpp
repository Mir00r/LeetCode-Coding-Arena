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


class Solution {
public:


    void reverse ( vector < int >& arr, int beg, int end ) {
        if ( beg >= end )
            return;
        else {
            while ( beg < end )
                swap ( arr[ beg++ ], arr[ end-- ] );
        }
    }


    void rotate( vector<int>& arr, int d ) {
        int i, indx, tmp, k;
        int len = arr.size();

        d %= len;

        if ( arr.empty() || len <= 0 || d <= 0 )
            return ;

        reverse ( arr, 0, len - 1 );
        reverse ( arr, 0, d - 1);
        reverse ( arr, d, len - 1 );

    }

    /*
    int gcd ( int a, int b ) {
        if ( b == 0 )
            return a;
        else
            return gcd ( b, a % b );
    }

    void rotate(vector<int>& arr, int d) {
        int i, indx, tmp, k;
        int len = arr.size();

        //if ( d > len )
            d %= len;

        int gcdValue = gcd ( d, len );

        for ( i = len - 1; i >= gcdValue; i-- ) {
            tmp = arr[ i ];
            indx = i;

            while ( 1 ) {
                k = indx + d;
               // printf ("K -> %d\n", k );

                if ( k >= len ) {
                    k -= len;
                    //printf ("If K -> %d\n", k );
                }

                if ( k == i ) break;

                arr[ indx ] = arr[ k ];
                //printf ("arr[ indx ] -> %d  Indx-> %d   arr[ k ] -> %d\n    Indx -> %d\n", arr[ indx ] , indx, arr[ k ], k );

                indx = k;
                //printf ("Indx -> %d\n", indx ) ;
            }
            arr[ indx ] = tmp;
        }
    }
    */
};



// Another Way using Juggling algorithm

class Solution {
public:
    int gcd(int a, int b){
        if ( b == 0 ){
            return a;
        }else{
            return gcd( b, a % b );
        }
    }

    void rotate(int nums[], int n, int k) {
        int i, j, tmp, pre;
        k = k % n;
        for ( i = 0; i < gcd( n, k ); i++){
            pre = nums[i];
            j = i;
            while ( (j + k) % n != i){
                tmp = nums[ ( j + k ) % n ];
                nums[ ( j + k ) % n ] = pre;
                pre = tmp;
                j = ( j + k ) % n;
            }
            nums[ ( j + k ) % n ] = pre;
        }

    }
};


// Another Brutforce Way

void rightRotateByOne ( int arr[], int n ) {

    int i, tmp;
    tmp = arr[ n - 1 ];
    for ( i = n - 1; i > 0; i-- )
        arr[ i ] = arr[ i - 1 ];
        arr[ i ] = tmp;
}


void rightRotate ( int arr[], int k, int n ) {
    int i;
    for ( i = 0; i < k; i++ )
        rightRotateByOne( arr, n );
}


void printArray ( int arr[], int n ) {
    for ( int i = 0; i < n; i++ ) printf ("%d ", arr[ i ]);
}


int gcd ( int a, int b ) {
    if ( b == 0 )
        return a;
    else
        return gcd ( b, a % b );
}


void rightRotateOneByOne ( int arr[], int d, int n ) {
    int i, indx, tmp, k;

    if ( d > n )
        d %= n;

    int gcdValue = gcd ( d, n );

    for ( i = n - 1; i >= gcdValue; i-- ) {
        tmp = arr[ i ];
        indx = i;

        while ( 1 ) {
            k = indx + d;
            //printf ("K -> %d\n", k );

            if ( k >= n ) {
                k -= n;
               // printf ("If K -> %d\n", k );
            }

            if ( k == i ) break;

            arr[ indx ] = arr[ k ];
            //printf ("arr[ indx ] -> %d  Indx-> %d   arr[ k ] -> %d\n    Indx -> %d\n", arr[ indx ] , indx, arr[ k ], k );

            indx = k;
            //printf ("Indx -> %d\n", indx ) ;
        }
        arr[ indx ] = tmp;
    }

}

int main () {
    int n, i, arr[ MAX ], k;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++) scanf ("%d", &arr[ i ]);
    scanf ("%d", &k);

    //rightRotate( arr, k, n );
    rightRotateOneByOne (arr, k, n );
    printArray( arr, n );

    return 0;
}


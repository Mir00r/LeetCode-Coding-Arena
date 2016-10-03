
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
    void moveZeroes(vector<int>& nums) {
        int i, len;
        len = nums.size();
        int left = 0, right = 0;

        while ( right < len ) {
            if ( nums[ right ] ) {
                swap ( nums[ left++ ], nums[ right ] );
            }
            right++;
        }


        /*
            int i, len, tmp_len;
            len = nums.size();
            vector < int > tmp_nums;
            int arr[ len ];
            int indx = 0;

            memo ( arr, 0 );

            for ( i = 0; i < len; i++ ) {
                if ( nums[ i ] > 0 ){
                    int a = nums[ i ];
                    //tmp_nums.pb( a );
                    //tmp_nums[ i ] = a;
                    arr[ indx++ ] = a;
                    //printf ("Ki ase -> %d\n", arr[ indx ] );
                }
            }

           // tmp_len = tmp_nums.size();
            for ( i = 0; i < indx; i++ ) printf ("%d ", arr[ i ]);
            NL;

        //    if ( len != indx ) {
        //        for ( i = 0; i <= len - indx; i++ )
        //            printf ("OK\n");
        //            arr[ indx++ ] = 0;
        //    }
        //
        //    printf ("Arr-len -> %d\n", indx );
        //
            copy( &arr[ 0 ], &arr[ len ], back_inserter( nums ));

        //    for ( i = 0; i < len; i++ )
        //        nums.pb( arr[ i ] );

            for ( i = 0; i < len; i++ )
                printf ("%d ", nums[ i ] );

        */
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

int main () {
    int n, i, arr[ MAX ], k, num;
    vector < int > vt;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++) {
        scanf ("%d", &num );
        vt.pb(num);
    }

    moveZeroes( vt );
    return 0;
}


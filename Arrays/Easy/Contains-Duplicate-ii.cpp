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
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        int i;
        map < int, int > mp;
        int len = arr.size();

        if( len == 0 ) return false;

        for ( i = 0; i < len; i++ ) {

            //printf ("Find -> %d\n", mp.find( arr[ i ] ) );
            //printf ("End -> %d\n", mp.end() );

            if ( mp.find( arr[ i ] ) == mp.end() ) {
                mp[ arr[ i ] ] = i;
                //printf ("mp[ arr[ i ] ] -> %d\n", mp[ arr[ i ] ] );
            }
            else {
                if ( i - mp[ arr[ i ] ] <= k ) {
                    //printf ("I ------>>>> %d\n", i );
                    //printf ("mp[ arr[ i ] ] ------>>>> %d\n", mp[ arr[ i ] ] );
                    //printf ("i - mp[ arr[ i ] ] ------>>>> %d\n", i - mp[ arr[ i ] ] );
                    return true;
                }
                else {
                    mp[ arr[ i ] ] = i;
                    //printf ("mp[ arr[ i ] ] || ---  -> %d\n", mp[ arr[ i ] ] );
                }
            }
        }
        return false;
    }
};





/*
bool containsNearbyDuplicate ( int arr[], int n, int k ) {
    int i;
    map < int, int > mp;

    if( n == 0 ) return false;

    for ( i = 0; i < n; i++ ) {

        //printf ("Find -> %d\n", mp.find( arr[ i ] ) );
        //printf ("End -> %d\n", mp.end() );

        if ( mp.find( arr[ i ] ) == mp.end() ) {
            mp[ arr[ i ] ] = i;
            printf ("mp[ arr[ i ] ] -> %d\n", mp[ arr[ i ] ] );
        }
        else {
            if ( i - mp[ arr[ i ] ] <= k ) {
                printf ("I ------>>>> %d\n", i );
                printf ("mp[ arr[ i ] ] ------>>>> %d\n", mp[ arr[ i ] ] );
                printf ("i - mp[ arr[ i ] ] ------>>>> %d\n", i - mp[ arr[ i ] ] );
                return true;
            }
            else {
                mp[ arr[ i ] ] = i;
                printf ("mp[ arr[ i ] ] || ---  -> %d\n", mp[ arr[ i ] ] );
            }
        }
    }
    return false;

}

int main () {
    int n, i, arr[ MAX ], k;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++) scanf ("%d", &arr[ i ]);
    scanf ("%d", &k );
    printf ( "%d", containsNearbyDuplicate ( arr, n, k ) );

    return 0;
}

*/

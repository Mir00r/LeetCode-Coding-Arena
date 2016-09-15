
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
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int last1 = m - 1;
        int last2 = n - 1;
        int indx = m + n - 1;

        while ( last1 >= 0 && last2 >= 0 ) {
            if ( num1[ last1 ] > num2[ last2 ] ) {
                num1[ indx-- ] = num1[ last1-- ];
               // printf ("num1[ indx ] -> %d    num1[ last1 ] -> %d\n",  num1[ indx ], num1[ last1 ]);
            }
            else {
                num1[ indx-- ] = num2[ last2-- ];
               // printf ("num1[ indx ] -> %d    num2[ last2-- ] -> %d\n",  num1[ indx ], num2[ last2 ]);
            }
        }

        while ( last2 >= 0 ) {
            num1[ indx-- ] = num2[ last2-- ];
        }

        /*
        int i, j, last;
        for ( i = n - 1; i >= 0; i-- ) {
            last = nums1[ m - 1 ];
            for ( j = m - 1; j >= 0 && nums1[ j ] > nums2[ i ]; j-- ) {
                nums1[ j + 1 ] = nums1[ j ];
                // printf ("num1[ j + 1 ] -> %d    num1[ j ] -> %d\n",  num1[ j + 1 ], num1[ j ]);
            }

            // if there was a greater element
            if ( j != m - 1 ) {
                nums1[ j + 1 ] = nums2[ i ];
                // printf ("num1[ j + 1 ] -> %d    num2[ i ] -> %d\n",  num1[ j + 1 ], num1[ i ]);
                nums2[ i ] = last;
            }
        }
        */
    }
};

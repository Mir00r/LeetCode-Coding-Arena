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
    vector<vector<int>> generate(int ROW) {
        int i, j, tmp;

        vector<vector<int>> res;
        if( ROW < 1 )
            return res;
        vector<int> row( 1, 1 );
        res.push_back(row);

        for( i = 2; i <= ROW; i++) {
            int prev = 1;
            for( j = 1; j < i - 1; j++) {
                int tmp = row[ j ];
                row[ j ] += prev;
                prev = tmp;
            }
            row.push_back(1);
            res.push_back(row);
        }
        return res;
    }
};







// class Solution {
// public:
//     vector<vector<int>> generate(int ROW) {
//         int n, r, ncr, space;

//         for ( n = 0; n < ROW; n++ ) {
//             // for ( space = 1; space < ROW - n; space++ ) {
//             //     printf (" ");
//             // }
//             for ( r = 0; r <= n; r++ ) {
//                 if ( n == 0 || r == 0 ) {
//                     ncr = 1;
//                     // printf ("%d ", ncr);
//                     generate(ROW).push_back(ncr);
//                     ROW--;
//                 }
//                 else {
//                     ncr = ncr * ( n - r + 1 ) / r;
//                     //printf ("%d ", ncr);
//                     generate(ROW).push_back(ncr);
//                     ROW--;
//                 }
//             }
//             //puts("");
//         }
//         return generate;
//     }
// };

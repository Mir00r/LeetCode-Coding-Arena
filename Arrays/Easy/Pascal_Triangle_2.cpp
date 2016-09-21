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
    vector<int> getRow(int rowIndex) {
        int i, j, prev, tmp;

        vector<int> row( rowIndex + 1, 1 );

        for( i = 1; i <= rowIndex; i++) {
            prev = 1;
            for( j = 1; j < i; j++) {
                tmp = row[ j ];
                row[ j ] += prev;
                prev = tmp;
            }
        }
        return row;
    }
};


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


vector < int > checkDupli ( vector < int > &num ) {
    int i, indx=0;
    int len = num.size();

    for ( i = 0; i < len; ++i ) {
        if ( num[ abs( num[ i ] - 1 ) ] > 0 ) {
            //num[ abs( num[ i ] - 1 ) ] = -num[ abs( num[ i ] - 1 ) ];
            num[ abs( num[ i ] - 1 ) ] *= -1;
            printf ("Ki ase -> %d\n", num[ abs( num[ i ] - 1 ) ] );
        }
    }

    vector < int > result;
    for ( i = 0; i < len; ++i ) {
        if ( num[ i ] > 0 ) {
            result.eb( i + 1 ) ;
        } else {
            num[ i ] *= -1;
        }
    }
    return result;
}


int main () {
    int n, i, j, arr[ MAX ], k, num, ans = 0;
    vector < int > vt;
    vector < int > res;

    scanf ("%d", &n);
    for ( i = 0; i < n; i++) {
        scanf ("%d", &num );
        vt.pb(num);
    }

    res = checkDupli( vt );

    for ( i = 0; i < res.size(); i++ ) printf ("%d ", res[ i ] );
    return 0;
}




class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[abs(nums[i]) - 1] > 0) {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                result.emplace_back(i + 1);
            } else {
                nums[i] *= -1;
            }
        }
        return result;
    }
};

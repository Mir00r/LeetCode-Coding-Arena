
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

// Problem Tag Two pointer, Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*set <int> st;
        for ( int i = 0; i < nums.size(); i++ ) {
            st.insert(nums[i]);
        }
        return st.size();*/

        int indx = 0;
        int len = nums.size();
        int i;

        for ( i = 0; i < len; i++ ) {
            if ( i + 1 < len && nums[ i ] == nums[ i + 1 ] )
                continue;
            else
                nums[ indx++ ] = nums[ i ];
        }
        return indx;
    }
};

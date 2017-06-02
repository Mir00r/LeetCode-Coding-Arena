#include <bits/stdc++.h>


using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 100
#define col 100
#define MAX 100000
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








int mat[ row ][ col ];


bool isNumberHere () {

}


/*
void input() {
    int n, m, tc, i, j, num;

    scanf ("%d", &tc);
    while ( tc-- ) {
        scanf ("%d %d", &n, &m);
        sacnf ("%d", &num );
        for ( i = 0; i < n; i++ )
            for ( j = 0; j < m; j++ ) scanf ("%d", &mat[ i ][ j ]);
    }
}*/



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int b = 0;
        int e = len - 1;
        int mid , ans = 0, i;

        while ( b <= e ) {
            mid = ( b + e ) / 2;
            if ( target > nums[ mid ]) {
                b = mid + 1;
                ans = b;
            }
            else {
                e = mid - 1;
                //ans = e;
            }
        }
        return ans;
    }
};

int main () {

    int i, n, t, num, tc;
    vector < int > vt;
    vector < int > ans;
    Solution sol;

    scanf("%d", &tc);

    while ( tc-- ) {
        scanf("%d %d", &n, &t);
        for ( i = 0; i < n; i++ ) {
            scanf("%d", &num);
            vt.pb(num);
        }
        cout << sol.searchInsert(vt, t) << endl;
    }
    return 0;
}

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



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int len1 = nums1.size();
        int len2 = nums2.size();
        int i=0, j=0;
        vector < int > res;

        while ( i < len1 && j < len2 ) {
            if ( nums1[ i ] < nums2[ j ]) i++;
            else if ( nums1[ i ] > nums2[ j ] ) j++;
            else {
                res.pb( nums1[ i ] );
                i++; j++;
            }
        }
        return res;
    }
};



int main () {

    int i, n, m, t, num, tc;
    vector < int > hea;
    vector < int > hou;
    vector < int > ans;
    Solution sol;

    //scanf("%d", &tc);

    //while ( tc-- ) {
        //scanf("%d %d", &n, &t);

        scanf("%d %d", &n, &m );

        for ( i = 0; i < n; i++ ) {
            scanf("%d", &num);
            hou.pb(num);
        }

        for ( i = 0; i < m; i++ ) {
            scanf("%d", &num);
            hea.pb(num);
        }

        //cout << hou.back() << endl;

        ans = sol.intersect( hou, hea );
        printf("SIZE of Array -> %d\n", ans.size() );
        for ( i = 0 ; i < ans.size() - 1; i++)
            cout << ans[ i ] << endl;


    //}
    return 0;
}


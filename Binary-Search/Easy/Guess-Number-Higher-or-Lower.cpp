
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






/*
You call a pre-defined API guess(int num) which returns 3 possible results (-1, 1, or 0):

-1 : My number is lower
 1 : My number is higher
 0 : Congrats! You got it!

*/
int guess(int num);




class Solution {
public:

    int guessNumber(int n) {
        int b = 1;
        int e = n;
        int mid , ans = 0, i;

        while ( b <= e ) {
            //mid = ( b + e ) / 2;
            mid = ( e - b ) / 2 + b;
            ans = guess( mid );

            if ( ans == 0 ) {
                return mid;
            }
            else if ( ans == 1 ) {
                b = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }
};


int main () {

    int i, n, t, num, tc;
    vector < int > vt;
    vector < int > ans;
    Solution sol;

    scanf("%d", &tc);

    while ( tc-- ) {
        //scanf("%d %d", &n, &t);

        scanf("%d", &n );

//        for ( i = 0; i < n; i++ ) {
//            scanf("%d", &num);
//            vt.pb(num);
//        }
        cout << sol.guessNumber(n) << endl;
    }
    return 0;
}



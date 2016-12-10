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


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int i;
        int alpabet[ 26 ];
        map < char, int > mp;

        for ( i = 0; i < magazine.length(); i++ ) {
            //alpabet[ magazine[ i ] - 'a']++;
            mp[ magazine[ i ] ]++;
        }

        for ( i = 0; i < ransomNote.length(); i++ ) {
            char ch = ransomNote[ i ];
            if ( mp[ ch ] <= 0 ) {

                return false;
                //alpabet[ ransomNote[ i ] - 'a' ]--;
            }
            else {
                //alpabet[ ransomNote[ i ] - 'a' ]--;
              //  return false;
                mp[ ch ]--;
            }
        }
        return true;
    }
};



int main () {
    string rans;
    string mega;

    cin >> rans;
    cin >> mega;

    Solution sol;
    bool ans = sol.canConstruct( rans, mega );

    cout << ans;

    return 0;
}

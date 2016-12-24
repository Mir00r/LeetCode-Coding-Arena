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
#define MINX INT_MAX
#define MAXN INT_MIN


class Solution {
public:

    bool isAlpa ( char ch ) {
        //if ( ( ch >= 'a' && ch <= 'z' ) || ( ch >= 'A' && ch <= 'Z' ) )
        if ( ( ch >= 'a' && ch <= 'z' ) || ( ch >= '0' && ch <= '9' ) )
            return true;
        else
            return false;
    }

    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        int i;

        //std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while ( left < right ) {
            while ( left < right && !isAlpa( s [ left ] ) ) left++;
            while ( left < right && !isAlpa( s [ right ] ) ) right--;

            if ( s[ left ] != s[ right ] ) break;
            left++;
            right--;
        }

        if ( left >= right )
            return true;
        else
            return false;
    }
};

int main () {
    string a;

    cin >> a;

    Solution sol;


    cout << sol.isPalindrome( a );
    return 0;
}



/*
char str[MAX];
int in1, in2;

bool is_pali (int x, int y){

    while (x < y){
        if (str[x] != str[y])
            return false;
        x++;
        y--;
    }

    return true;
}


void check_str (int ln){
    int maxn = 0, tmp = 0, i, j;
    in1 = in2 = 0;

    for (i = 0; i < ln; i++){
        for (j = 0; j < ln; j++){
            if (is_pali (i, j) ){
                tmp = j - i + 1;
                if (maxn < tmp){
                    maxn = tmp;
                    in1 = i;
                    in2 = j;
                }
            }
        }
    }

}

int main (){
    int ans, len, i;

    scanf ("%s", str);
    len = strlen (str);

    check_str (len);

    for (i = in1; i <= in2; i++)
        printf ("%c", str[i]);
    NL;

    return  0;
}
*/

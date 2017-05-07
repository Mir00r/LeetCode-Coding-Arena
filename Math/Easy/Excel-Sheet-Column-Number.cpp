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
    int titleToNumber(string s) {
        int len = s.size();
        int i, ans = 0;

        for ( i = 0; i < len; i++ ) {
            ans = ans * 26 + ( s[ i ] - 'A' + 1 );
        }
        return ans;
    }
};

void printString(int n)
{
    char str[MAX];  // To store result (Excel column name)
    int i = 0;  // To store current index in str which is result

    while (n>0)
    {
        // Find remainder
        int rem = n%26;

        // If remainder is 0, then a 'Z' must be there in output
        if (rem==0)
        {
            str[i++] = 'Z';
            n = (n/26)-1;
        }
        else // If remainder is non-zero
        {
            str[i++] = (rem-1) + 'A';
            n = n/26;
        }
    }
    str[i] = '\0';

    // Reverse the string and print result
    reverse(str, str + strlen(str));
    cout << str << endl;

    return;
}


int main () {
    int n, tc ;

    scanf("%d", &tc);
    Solution sol;
    string s;

    while ( tc-- ) {
        //scanf("%d", &n);
        cin >> s;
        cout << sol.titleToNumber( s ) << endl;
    }
    return 0;
}


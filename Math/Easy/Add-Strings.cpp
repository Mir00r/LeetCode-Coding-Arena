
#include <bits/stdc++.h>


using namespace std;

#define LI long int
#define LLI long long int
#define LL __int64
#define ULL unsigned long long
#define LLU long long unsigned
#define row 100
#define col 100
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
    string addStrings(string num1, string num2) {
        int len1 = num1.size() - 1;
        int len2 = num2.size() - 1;
        int i;
        string sum="";
        int carry = 0;


        while ( len1 >= 0 && len2 >= 0 ) {
            //printf("-------------------- Len1 and Len2 -------------------\n\n");
            int tmp = num1[ len1 ] - '0' + num2[ len2 ] - '0' + carry;
            //printf ("TMP -------> %d\n", tmp);

            if ( tmp > 9 ) {
                carry = 1;
                tmp -= 10;
            }
            else { carry = 0; }

            sum += char( tmp + '0');
            //cout << "SUM --------------> " << sum << endl;
            len1--;
            len2--;
        }


        while ( len1 >= 0) {
            //printf("-------------------- Len1 -------------------\n\n");
            int tmp = num1[ len1 ] - '0' + carry;
            //printf ("Tmp1 -------> %d\n", tmp);
            carry = 0;

            if ( tmp > 9 ) {
                carry = 1;
                tmp %= 10;
            }
            else { carry = 0; }

            sum += char ( tmp + '0');
            len1--;
        }


        while ( len2 >= 0) {
            //printf("-------------------- Len2 -------------------\n\n");
            int tmp = num2[ len2 ] - '0' + carry;
            //printf ("Tmp2 -------> %d\n", tmp);
            carry = 0;

            if ( tmp > 9 ) {
                carry = 1;
                tmp %= 10;
            }
            else { carry = 0; }

            sum += char ( tmp + '0');
            len2--;
        }

        //printf ("Final Carry -------------> %d\n", carry);
        if(carry)
            sum += "1";

        // reversing the answer
        string res = "";
        for( i = sum.size()-1; i >= 0; i-- )
            res += sum[ i ];

    return res;
    }
};


int main () {
    int n, num;
    vector < int > vt;
    scanf ("%d", &n);
    Solution sol;

    string num1, num2;


    while ( n-- ) {
        //scanf ("%d", &num);
        //vt.pb(num);

        cin >> num1;
        cin >> num2;
        cout << sol.addStrings( num1, num2 ) << endl;
    }


    return 0;
}

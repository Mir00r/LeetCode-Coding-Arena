
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


bool checkVowel ( string s, int i ) {

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
             || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        //current = i;
        return true;
    }
    return false;
}

void swap(char& c, char&d){

    char temp = c;
    c = d;
    d = temp;
}


class Solution {
public:
    string reverseVowels(string str) {
        int start, end, len;
        start = 0;
        end = str.size() - 1;

        while ( start < end ) {

            while ( start < end && !checkVowel ( str, start ) ) start++;
            while ( end > start && !checkVowel ( str, end ) ) end--;


            if ( start < end ) {
                swap ( str[ start ], str[ end ] );
                start++;
                end--;
            }

           /* if ( checkVowel( str, start ) && checkVowel( str, end ) ) {
                swap( str[ start], str[ end ]  );
                start++;
                end--;
            }
            if ( !checkVowel( str, start ) && !checkVowel( str, end ) ) {
                start++;
                end--;
            }
            if ( str[ start ] == ' ' && str[ end ] == ' ' ) {
                start++;
                end--;
            }
            if ( !checkVowel( str, start ) && str[ end ] == ' ' ) {
                start++;
                end--;
            }
            if ( !checkVowel( str, end ) && str[ start ] == ' ' ) {
                start++;
                end--;
            }
            if ( checkVowel( str, start ) && str[ end ] == ' ' ) {
                end--;
            }
            if ( checkVowel( str, end ) && str[ start ] == ' ' ) {
                start++;
            }

            if ( !checkVowel( str, start ) && checkVowel( str, end ) ) {
                start++;
            }
            if ( checkVowel( str, start ) && !checkVowel( str, end ) ) {
                end--;
            }*/
        }

        return str;
    }
};


int main () {
    string rans;

    cin >> rans;

    Solution sol;
    string ans = sol.reverseVowels( rans );

    cout << ans;

    return 0;
}

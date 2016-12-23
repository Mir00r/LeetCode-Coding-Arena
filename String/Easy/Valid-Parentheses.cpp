
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
    bool isValid(string s) {
        int len = s.size(), i;
        stack < char > st;
        bool check = true;

        if ( len == 1 || len == 0 ) {
            return false;
        }
        else {
            for ( i = 0; i < len; i++ ) {
                if ( s[ i ] == '(' || s[ i ] == '[' || s[ i ] == '{' ) {
                    st.push( s[ i ] );
                    //check = false;
                }
                else {
                    if ( s[ i ] == ')') {
                        if ( !st.empty() ) {
                            if ( st.top() == '(' ) {
                                    st.pop();
                                    continue;
                            }
                            else {
                                check = false;
                                //return check ;
                                break;
                            }
                        }
                        else{
                            check = false;
                            //return check ;
                            break;
                        }
                    }
                     else if ( s[ i ] == '}') {
                        if ( !st.empty() ) {
                            if ( st.top() == '{' ) {
                                    st.pop();
                                    continue;
                            }
                            else {
                                check = false;
                                //return check;
                                break;
                            }
                        }
                        else{
                            check = false;
                            //return check;
                            break;
                        }
                    }
                    else if ( s[ i ] == ']') {
                        if ( !st.empty() ) {
                            if ( st.top() == '[' ) {
                                    st.pop();
                                    continue;
                            }
                            else {
                                check = false;
                                //return check;
                                break;
                            }
                        }
                        else{
                            check = false;
                            //return check;
                            break;
                        }
                    }
                }
            }

            if (st.empty() == false)
                check = false;

            if (check)
                return true;
            else
                return false;

        }

    }
};


int main () {
    string str;
    cin >> str;

    Solution sol;

    cout << sol.isValid( str );
    return 0;
}



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


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i, len;
        vector < int > res;

        len = digits.size();

        if ( len == 0 )
            return digits;

        for ( i = len - 1; i >= 0; i-- ) {
            if ( digits[ i ] + 1 > 9 ) {
                digits[ i ] = digits[ i ] + 1 - 10;

                if( i == 0 )
                    digits.insert( digits.begin(), 1 );
            }
            else{
                digits[i] = digits[i] + 1;
                break;
            }

        }
        return digits;

        /*
        if ( len == 0 )
            return digits;

        for ( i = len - 1; i >= 0; i-- ) {
            if ( digits[ i ] < 9 ) {
                digits[ i ]++;
                return digits;
            }
            digits[ i ] = 0;
        }

        res[ 1 ] = digits[ len + 1 ];
        res[ 0 ] = 1;
        return res;
        */

        /*
        int carry = 1, val;

        if ( len == 0 )
            return digits;

        for ( i = len - 1; i >= 0; i-- ) {
            val = digits[ i ] + carry;
            carry = val / 10;
            digits[ i ] = val % 10;

            if ( carry == 0 )
                return digits;
        }

        if ( carry > 0 ) {
           // res[ 1 ] = digits[ len + 1 ];
            res( len + 1);
            res[ 0 ] = carry;
            return res;
        }
        else
            return res;
        */



    }
};

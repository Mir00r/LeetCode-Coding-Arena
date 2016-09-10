
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

// Problem Tag Array, HashTable

class Solution{

public:
    vector<int> twoSum(vector<int>& numbers, int target){

        vector<int> tmpNumbers(numbers.begin(), numbers.end());
        sort(tmpNumbers.begin(), tmpNumbers.end());

        int val1 = -1;
        int val2 = -1;
        int i = 0;
        int j = tmpNumbers.size() - 1;
        // find two numbers added equals to target

        while(i < j){

            if((tmpNumbers[i] + tmpNumbers[j]) < target){
                i++;
            }
            else if((tmpNumbers[i] + tmpNumbers[j]) > target){
                j--;
            }
            else{
                val1 = tmpNumbers[i];
                val2 = tmpNumbers[j];
                break;
            }
        }

        vector<int> result;
        // find the index of the two numbers

        for(int i = 0; i < numbers.size(); i++){
            if(numbers[i] == val1 || numbers[i] == val2){
                result.push_back(i + 1);
            }
            if(2 == result.size()){
                return result;
            }
        }
        return result;
    }
};

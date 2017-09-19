
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


class MyQueue {
public:

    stack < int > st;

    /** Initialize your data structure here. */
    MyQueue() {

    }

    // helper class of data pushing into queue using stack
    void pushHelper (int x) {
        if( st.size() == 0 ){
            st.push( x );
            printf("IF in X ------ %d\n", x);
            return;
        }

        int data;
        data = st.top();
        printf("DATA --*-*-**-* %d\n", data);

        st.pop();

        pushHelper(x);
        st.push(data);

        return;
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        pushHelper(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int num = st.top();
        st.pop();
        return num;
    }

    /** Get the front element. */
    int peek() {
        return st.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return ( st.size() == 0 );
    }

};




int main(){
    MyQueue mQ;// = new MyQueue();

    mQ.push(2);
    mQ.push(4);
    mQ.push(8);
    mQ.push(7);
    mQ.push(6);

    //mQ.pop();
    //printf("N ---> %d\n", n);

    //mQ.pop();
    //printf("N ---> %d\n", n);

    //int m = mQ.peek();
    //printf("M ---> %d\n", m);

    return 0;
}

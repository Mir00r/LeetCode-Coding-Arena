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






//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    void insertDataIntoLinkList ( struct ListNode** headReference, int newData ) {
        // allocate node
        //struct ListNode* newNode = new Node; // C++ way to create newNode
        struct ListNode* newNode = (struct ListNode*) malloc(sizeof(struct ListNode)); // C way to create newNode

        // put data into link list
        newNode->val = newData;

        // link the old list off the new node
        newNode->next = *headReference;

        // move the head to point to the new node
        *headReference = newNode;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        if ( head == NULL )
            return NULL;

        ListNode *nextItem = head->next;

        // Checking duplicate item
        while ( nextItem != NULL && head->val == nextItem->val ) {
            nextItem = nextItem->next;
        }
        head->next = deleteDuplicates(nextItem);

        return head;
    }

    void Print (ListNode* head){
        //struct ListNode* tmp = head;

        //printf ("The List is: ");

        while ( head != NULL ){
            printf (" %d", head->val );
            head = head->next;
        }
        puts ("");
    }
};


int main(){

    /* Start with the empty list */
    struct ListNode* head = NULL;

    Solution sol;

    sol.insertDataIntoLinkList(&head, 20);
    sol.insertDataIntoLinkList(&head, 4);
    sol.insertDataIntoLinkList(&head, 4);
    sol.insertDataIntoLinkList(&head, 10);

    /* Create a loop for testing */
    //head->next->next->next->next = head;

    sol.deleteDuplicates(head);
    sol.Print(head);
    return 0;
}


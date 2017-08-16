
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

    ListNode* removeElements(ListNode *head, int val) {

        if ( head == NULL ) {
            return NULL;
        }

        struct ListNode* previousNode = head;

        while ( previousNode->next != NULL ) {
            printf("prev next value -------> %d\n", previousNode->next->val);
            if( previousNode->next->val == val ){
                printf("after next value -+-+-+-+-> %d\n", previousNode->next->val);
                previousNode->next = previousNode->next->next;
            }
            else {
                previousNode = previousNode->next;
            }
        }

        if ( head->val == val ) {
            head = head->next;
        }
        return head;



//        ListNode **previousNode = &head;
//
//        while (*previousNode != nullptr){
//            if ((*previousNode)->val == val){
//                *previousNode = (*previousNode)->next;
//            }
//            else{
//                previousNode = &(*previousNode)->next;
//            }
//        }
//        return head;
    }

    void printLinkList (ListNode* head){
        //struct ListNode* tmp = head;

        //printf ("The List is: ");

        while ( head != NULL ){
            printf ("%d ", head->val );
            head = head->next;
            //printf ("%d ", head->val );
        }
        puts ("");
    }
};


int main(){

    /*
        Create two linked lists

        1st 3->6->9->15->30
        2nd 10->15->30

        15 is the intersection point
    */

    /* Start with the empty list */
    struct ListNode* head = NULL;
    struct ListNode* resultNode = NULL;

    Solution sol;

    /* Create following linked list
      12->15->10->11->5->6->2->3 */
    sol.insertDataIntoLinkList(&head, 1);
    sol.insertDataIntoLinkList(&head, 2);
    sol.insertDataIntoLinkList(&head, 6);
    sol.insertDataIntoLinkList(&head, 3);
    sol.insertDataIntoLinkList(&head, 6);
    sol.insertDataIntoLinkList(&head, 5);
    sol.insertDataIntoLinkList(&head, 6);
    sol.insertDataIntoLinkList(&head, 7);
    sol.insertDataIntoLinkList(&head, 8);

    sol.printLinkList( head );
    resultNode = sol.removeElements(head, 6);
    sol.printLinkList( resultNode );
    return 0;
}

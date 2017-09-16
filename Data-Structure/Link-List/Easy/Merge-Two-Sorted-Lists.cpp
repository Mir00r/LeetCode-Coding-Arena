
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
    char ch;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    void insertDataIntoLinkList ( struct ListNode** headReference, int newData ) {
        // allocate node
        //struct ListNode* newNode = new ListNode; // C++ way to create newNode
        struct ListNode* newNode = (struct ListNode*) malloc(sizeof(struct ListNode)); // C way to create newNode

        // put data into link list
        newNode->val = newData;

        // link the old list off the new node
        newNode->next = *headReference;

        // move the head to point to the new node
        *headReference = newNode;
    }

    void insertCharIntoLinkList ( struct ListNode** headReference, char newData ) {
        // allocate node
        //struct ListNode* newNode = new Node; // C++ way to create newNode
        struct ListNode* newNode = (struct ListNode*) malloc(sizeof(struct ListNode)); // C way to create newNode

        // put data into link list
        newNode->ch = newData;

        // link the old list off the new node
        newNode->next = *headReference;

        // move the head to point to the new node
        *headReference = newNode;
    }


    /* MoveNode() function takes the node from the front of the
       source, and move it to the front of the dest.
       It is an error to call this with the source list empty.

       Before calling MoveNode():
       source == {1, 2, 3}
       dest == {1, 2, 3}

       Affter calling MoveNode():
       source == {2, 3}
       dest == {1, 1, 2, 3} */
    void moveNode(struct ListNode** destinationReference, struct ListNode** sourceReference) {
        // front source node
        struct ListNode* newNode = *sourceReference;

        assert( newNode != NULL);

        // advance the source pointer
        *sourceReference = newNode->next;

        // link the old destination off the new node
        newNode->next = *destinationReference;

        // move destination to point the new node
        *destinationReference = newNode;
    }

    /* Takes two lists sorted in increasing order, and splices
       their nodes together to make one big sorted list which
       is returned.  */
    struct ListNode* sortedMerge(struct ListNode* a, struct ListNode* b) {
        struct ListNode result = NULL;

        // tail points to the result node
        struct ListNode* tail = &result;

        // sorted tail->next is the place to add new nodes to the result
        result.next = NULL;

        while(1){
            if ( a == NULL){
                tail->next = b;
                break;
            } else if ( b == NULL ) {
                tail->next = a;
                break;
            }
            if ( a->val <= b->val) {
                puts("IF");
                printf("a->val --- %d\n", a->val);
                printf("b->val --- %d\n", b->val);
                moveNode( &(tail->next), &a);
            } else {
                puts("ELSE");
                printf("a->val --- %d\n", a->val);
                printf("b->val --- %d\n", b->val);
                moveNode( &(tail->next), &b);
            }
            tail = tail->next;
        }
        return result.next;
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
    }


    // Function to check if two input lists have same data
    bool compareLists (ListNode* head1, ListNode* head2 ) {
        struct ListNode* tmp1 = head1;
        struct ListNode* tmp2 = head2;

        while ( tmp1 && tmp2 ) {
            if ( tmp1->ch == tmp2->ch ) {
                tmp1 = tmp1->next;
                tmp2 = tmp2->next;
            }
            else
                return 0;
        }

        // Both are empty return 1;
        if ( tmp1 == NULL && tmp2 == NULL )
            return 1;

        // will reach here when one is null and other is not
        return 0;
    }

    void reverseLinkList(ListNode** headReferance ) {
        struct ListNode* previousNode = NULL;
        struct ListNode* currentNode = *headReferance;
        struct ListNode* nextNode;

        while ( currentNode != NULL ) {
            nextNode = currentNode->next;
            currentNode->next = previousNode;
            previousNode = currentNode;
            currentNode = nextNode;
        }

        *headReferance = previousNode;
    }


    bool isPalindrome(struct ListNode *head){
        struct ListNode *slowPtr = head, *fastPtr = head;
        struct ListNode *secondHalf, *prevOfSlowPtr = head;
        struct ListNode *midnode = NULL;  // To handle odd size list
        bool res = true; // initialize result

        if ( head != NULL && head->next != NULL ){
            /* Get the middle of the list. Move slowPtr by 1
              and fastPtrr by 2, slowPtr will have the middle
              node */
            while (fastPtr != NULL && fastPtr->next != NULL){
                fastPtr = fastPtr->next->next;

                /*We need previous of the slowPtr for
                 linked lists  with odd elements */
                prevOfSlowPtr = slowPtr;
                slowPtr = slowPtr->next;
            }


            /* fastPtr would become NULL when there are even elements in list.
               And not NULL for odd elements. We need to skip the middle node
               for odd case and store it somewhere so that we can restore the
               original list*/
            if (fastPtr != NULL){
                midnode = slowPtr;
                slowPtr = slowPtr->next;
            }

            // Now reverse the second half and compare it with first half
            secondHalf = slowPtr;
            prevOfSlowPtr->next = NULL; // NULL terminate first half
            reverseLinkList(&secondHalf);  // Reverse the second half
            res = compareLists(head, secondHalf); // compare

            // Construct the original list back
             reverseLinkList(&secondHalf); // Reverse the second half again

              // If there was a mid node (odd size case) which
             // was not part of either first half or second half.
             if (midnode != NULL)
             {
                prevOfSlowPtr->next = midnode;
                midnode->next = secondHalf;
             }
             else  prevOfSlowPtr->next = secondHalf;
        }
        return res;
    }







    void printLinkList (ListNode* head){
        //struct ListNode* tmp = head;

        //printf ("The List is: ");

        while ( head != NULL ){
            printf ("%d ", head->val );
         //   printf ("%c ", head->ch );
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
    //struct ListNode* head = NULL;
    struct ListNode* resultNode = NULL;

    struct ListNode* x = NULL;
    struct ListNode* y = NULL;

    Solution sol;

    /* Create following linked list
      12->15->10->11->5->6->2->3 */

    sol.insertDataIntoLinkList(&x, 15);
    sol.insertDataIntoLinkList(&x, 10);
    sol.insertDataIntoLinkList(&x, 5);

    sol.insertDataIntoLinkList(&y, 20);
    sol.insertDataIntoLinkList(&y, 3);
    sol.insertDataIntoLinkList(&y, 2);

//    sol.insertDataIntoLinkList(&head, 6);
//    sol.insertDataIntoLinkList(&head, 7);
//    sol.insertDataIntoLinkList(&head, 8);

   // sol.printLinkList(x);
   // sol.printLinkList(y);

    resultNode = sol.sortedMerge( x, y );
    sol.printLinkList(resultNode);

    return 0;
}

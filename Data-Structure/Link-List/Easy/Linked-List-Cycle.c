
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




// Make Link List Note
struct Node{
    int data;
    struct Node* next;
};


void insertDataIntoLinkList ( struct Node** headReference, int newData ) {
    // allocate node
    //struct Node* newNode = new Node; // C++ way to create newNode
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); // C way to create newNode

    // put data into link list
    newNode->data = newData;

    // link the old list off the new node
    newNode->next = *headReference;

    // move the head to point to the new node
    *headReference = newNode;
}



int findCycleOrLoop(struct Node *list) {
    struct Node *firstPointer = list;
    struct Node *secondPointer = list;

    while ( firstPointer && secondPointer && secondPointer->next ) {
        firstPointer = firstPointer->next;
        secondPointer = secondPointer->next->next;

        if ( firstPointer == secondPointer ) {
            puts("Found Cycle Or Loop");
            return 1;
        }
    }
    return 0;
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    bool hasCycle(ListNode *head) {
        struct ListNode *firstPointer = head;
        struct ListNode *secondPointer = head;

        while ( firstPointer && secondPointer && secondPointer->next ) {
            firstPointer = firstPointer->next;
            secondPointer = secondPointer->next->next;

            if ( firstPointer == secondPointer ) {
                //puts("Found Cycle Or Loop");
                return true;
            }
        }
        return false;
    }
};


int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    insertDataIntoLinkList(&head, 20);
    insertDataIntoLinkList(&head, 4);
    insertDataIntoLinkList(&head, 15);
    insertDataIntoLinkList(&head, 10);

    /* Create a loop for testing */
    head->next->next->next->next = head;
    findCycleOrLoop(head);

    return 0;
}

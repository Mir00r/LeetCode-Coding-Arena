
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

    // take head pointer of link list and return number of nodes in list
    int getCountLinkListNode ( struct ListNode* head ) {
        struct ListNode* currentNode = head;
        int cnt = 0;

        while ( currentNode != NULL ) {
            cnt++;
            currentNode = currentNode->next;
        }
        return cnt;
    }

    ListNode* _getIntersectionNode ( int diff, struct ListNode* head1, ListNode* head2 ) {
        int i;
        struct ListNode* currentNode1 = head1;
        struct ListNode* currentNode2 = head2;
        struct ListNode* tmp = NULL;

        for ( i = 0; i < diff; i++ ) {
            if ( currentNode1 == NULL ) {
                return tmp;
            }
            currentNode1 = currentNode1->next;
        }

        while ( currentNode1 != NULL && currentNode2 != NULL ) {
            if ( currentNode1 == currentNode2 ) {
                return currentNode1;
            }
            currentNode1 = currentNode1->next;
            currentNode2 = currentNode2->next;
        }

        return tmp;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int listCnt1 = getCountLinkListNode(headA);
        int listCnt2 = getCountLinkListNode(headB);
        int diff;
        struct ListNode* instersectNode = NULL;

        if ( listCnt1 > listCnt2 ) {
            diff = listCnt1 - listCnt2;
            instersectNode = _getIntersectionNode(diff, headA, headB);
        }
        else {
            diff = listCnt2 - listCnt1;
            instersectNode = _getIntersectionNode(diff, headB, headA);
        }

        return instersectNode;
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

    /*
        Create two linked lists

        1st 3->6->9->15->30
        2nd 10->15->30

        15 is the intersection point
    */

    /* Start with the empty list */
    //struct ListNode* head = NULL;
    struct ListNode* resultNode = NULL;

    Solution sol;

    struct ListNode* newNode;
    struct ListNode* head1 =
            (struct ListNode*) malloc(sizeof(struct ListNode));
    head1->val  = 10;

    struct ListNode* head2 =
            (struct ListNode*) malloc(sizeof(struct ListNode));
    head2->val  = 3;

    newNode = (struct ListNode*) malloc (sizeof(struct ListNode));
    newNode->val = 6;
    head2->next = newNode;

    newNode = (struct ListNode*) malloc (sizeof(struct ListNode));
    newNode->val = 9;
    head2->next->next = newNode;

    newNode = (struct ListNode*) malloc (sizeof(struct ListNode));
    newNode->val = 15;
    head1->next = newNode;
    head2->next->next->next  = newNode;

    newNode = (struct ListNode*) malloc (sizeof(struct ListNode));
    newNode->val = 30;
    head1->next->next= newNode;

    head1->next->next->next = NULL;

    resultNode = sol.getIntersectionNode(head1, head2);
    sol.Print( resultNode );
    return 0;
}


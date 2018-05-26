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
#define null NULL


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:

    struct TreeNode* NewNode(int val){
        struct TreeNode *node = (struct TreeNode*)malloc ( sizeof (struct TreeNode) ); // Creating a new Tree_Node

        node->val = val;
        node->left = NULL;
        node->right = NULL;

        return (node);
    }

    void inorder ( struct TreeNode *root){
        if (root != NULL){
            inorder ( root->left );
            printf ("%d ", root->val );
            inorder ( root->right );
        }
    }

    /* A utility function to insert a new node with given key in BST */
    struct TreeNode* Insertion (struct TreeNode* node, int value){
        /* If the tree is empty, return a new node */
        if (node == NULL) {
            return NewNode( value );
        }

        /* Otherwise, recursive down the tree */
        if ( value < node->val ) {
            node->left  = Insertion ( node->left, value );
        }
        else if ( value > node->val ) {
            node->right = Insertion ( node->right, value );
        }

        /* return the (unchanged) node pointer */
        return node;
    }

    struct TreeNode* mergeTrees (struct TreeNode* treeOne, struct TreeNode* treeTwo) {
        if(!treeOne) return treeTwo;
        if(!treeTwo) return treeOne;

        treeOne->val += treeTwo->val;
        treeOne->left = mergeTrees(treeOne->left, treeTwo->left);
        treeOne->right = mergeTrees(treeOne->right, treeTwo->right);

        treeOne;

        /*
        if (t2 == NULL)
            return t1;

        if (t1 == NULL)
            return t2;

        t1->val += t2->val;

        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);

        return t1;
    */
    }
};


int main () {
    /* Let us create following BST
            50
           /  \
          30   80
           \
            40
              */

    TreeNode *root1 = NULL;
    Solution sol;

    root1 = sol.NewNode(1);
    root1->left = sol.NewNode(2);
    root1->right = sol.NewNode(3);
    root1->left->left = sol.NewNode(4);
    root1->left->right = sol.NewNode(5);
    root1->right->right = sol.NewNode(6);


    sol.inorder(root1);NL;

    TreeNode *root2 = NULL;

    root2 = sol.NewNode(4);
    root2->left = sol.NewNode(1);
    root2->right = sol.NewNode(7);
    root2->left->left = sol.NewNode(3);
    root2->right->left = sol.NewNode(2);
    root2->right->right = sol.NewNode(6);

//    root2 = sol.Insertion (root2, 4);
//    sol.Insertion ( root2, 1 );
//    sol.Insertion ( root2, 7 );
//    sol.Insertion ( root2, 3 );
//    sol.Insertion ( root2, 2 );
//    sol.Insertion ( root2, 6 );

    sol.inorder(root2);NL;

    TreeNode *mergeRoot = sol.mergeTrees(root1, root2);

    sol.inorder(mergeRoot);

    return 0;
}


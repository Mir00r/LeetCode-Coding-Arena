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

    int findTilt(TreeNode* root) {
        if(root == NULL || (root->left == NULL && root->right == NULL))
            return 0;
        int result = 0;
        util(root, result);
        return result;
    }

    int util(TreeNode* root, int& result){
        if(root == NULL)
            return 0;

        int left = util(root->left, result);
        int right = util(root->right, result);
        printf("Left -> %d  Right -> %d\n", left, right);

        result += abs(left - right);

        printf("ABS Result -> %d \n", abs(left - right));
        printf("Result -> %d \n", result);
        printf("Final Result -> %d \n", left + root->val + right);

        return left + root->val + right;
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


    //sol.inorder(root1);
    //NL;
    //sol.inorder(sol.invertTree(root1));
    printf("Binary tree tilt %d\n", sol.findTilt(root1));
    return 0;
}

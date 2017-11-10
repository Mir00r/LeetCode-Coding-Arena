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

    struct TreeNode *NewNode(int val) {
        struct TreeNode *node = (struct TreeNode *) malloc(sizeof(struct TreeNode)); // Creating a new Tree_Node

        node->val = val;
        node->left = NULL;
        node->right = NULL;

        return (node);
    }

    void inorder(struct TreeNode *root) {
        if (root != NULL) {
            inorder(root->left);
            printf("%d ", root->val);
            inorder(root->right);
        }
    }

    /* A utility function to insert a new node with given key in BST */
    struct TreeNode *Insertion(struct TreeNode *node, int value) {
        /* If the tree is empty, return a new node */
        if (node == NULL) {
            return NewNode(value);
        }

        /* Otherwise, recursive down the tree */
        if (value < node->val) {
            node->left = Insertion(node->left, value);
        } else if (value > node->val) {
            node->right = Insertion(node->right, value);
        }

        /* return the (unchanged) node pointer */
        return node;
    }

    TreeNode *trimBST(TreeNode *root, int L, int R) {

        if (root == null) {
            return null;
        }

        if (root->val < L) {
            return trimBST(root->right, L, R);
        }
        if (root->val > R) {
            return trimBST(root->left, L, R);
        }

        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};

int main() {
    /* Let us create following BST
            5
           /  \
          2   13
              */

    TreeNode *root = NULL;
    Solution sol;

    root = sol.Insertion(root, 1);
    sol.Insertion(root, 0);
    sol.Insertion(root, 2);

    sol.inorder(root);
    NL;
    TreeNode *ans = sol.trimBST(root, 1, 2);

    sol.inorder(ans);
    return 0;
}

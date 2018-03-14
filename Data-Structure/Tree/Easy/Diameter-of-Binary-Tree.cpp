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


/**
 * Link list node
 */
struct TreeNode {
    int value;
    TreeNode *next;
    struct TreeNode *left, *right;
};


class Solution {
public:

    /**
     * A utility function to create a new node for BST
     * @param val
     * @return
     */
    struct TreeNode *NewNode(int val) {
        struct TreeNode *node = (struct TreeNode *) malloc(sizeof(struct TreeNode)); // Creating a new Tree_Node

        node->value = val;
        node->left = node->right = null;
        return (node);
    }

    /**
     * Givern a binary tree, print it's node's in Inorder
     * @param node
     */
    void InOrder(struct TreeNode *node) {
        if (node == NULL)
            return;

        // recure the laft child node subtree
        InOrder(node->left);

        // first print root node
        printf("%d ", node->value);

        // recure the right child node subtree
        InOrder(node->right);

    }

    /**
     * Givern a binary tree, print it's node's in Preorder
     * @param node
     */
    void preOrder(struct TreeNode *node) {
        if (node == NULL)
            return;

        // first print root node
        printf("%d ", node->value);

        // recure the laft child node subtree
        preOrder(node->left);

        // recure the right child node subtree
        preOrder(node->right);
    }

    /**
     * Givern a binary tree, print it's node's in Postorder
     * @param node
     */
    void postOrder(struct TreeNode *node) {
        if (node == NULL)
            return;

        // recure the laft child node subtree
        postOrder(node->left);

        // recure the right child node subtree
        postOrder(node->right);

        // first print root node
        printf("%d ", node->value);
    }

    /**
     * A utility function to insert a new node with given key in BST
     * @param node
     * @param value
     * @return
     */
//    struct Node *Insertion(struct Node **node, int value) {
//
//        /*put in the data*/
//        struct Node *newNode = NewNode(value);
//
//        /*link the old list off the new node*/
//        newNode->next = *node;
//
//        /* Move the head to point to the new node */
//        return *node = newNode;
//    }

    /**
     * A utility function to insert a new node with given key in BST
     * @param node
     * @param value
     * @return
     */
    struct TreeNode *Insertion(struct TreeNode *node, int value) {
        /* If the tree is empty, return a new node */
        if (node == NULL) {
            return NewNode(value);
        }

        /* Otherwise, recursive down the tree */
        if (value < node->value) {
            node->left = Insertion(node->left, value);
        } else if (value > node->value) {
            node->right = Insertion(node->right, value);
        }

        /* return the (unchanged) node pointer */
        return node;
    }

    /**
     * function to get diameter of binary tree
     * @param tree
     * @return
     */
    int getDiameter(struct TreeNode *tree) {
        if (tree == NULL) {
            return 0;
        }

        // get the height of left and right sub-trees
        int leftTreeHeight = getHeight(tree->left);
        int rightTreeHeight = getHeight(tree->right);

        // get the diameter of left and right sub-trees
        int leftTreeDiameter = getDiameter(tree->left);
        int rightTreeDiameter = getDiameter(tree->right);

        /* Return max of following three
           1) Diameter of left subtree
           2) Diameter of right subtree
           3) Height of left subtree + height of right subtree + 1 */
        int height = max(leftTreeHeight + rightTreeHeight + 1, max(leftTreeDiameter, rightTreeDiameter));

        // Note: If we consider The length of path between two nodes is represented by the number of edges between them.
        // then below code will be executed
        //int height = max(leftTreeHeight + rightTreeHeight + 1, max(leftTreeDiameter, rightTreeDiameter));
        return height;
    }

    /**
     * The function Compute the "height" of a tree. Height is the
     * number f nodes along the longest path from the root node
     * down to the farthest leaf node.
     * @param node
     * @return
     */
    int getHeight(struct TreeNode *node) {
        if (node == NULL) {
            return 0;
        }

        // get the height of left and right sub-trees
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        // If tree is not empty then height = 1 max of left and right heights of tree
        int height = 1 + max(leftHeight, rightHeight);
        return height;
    }


    /**
     * ANOTHER OPTIMIZED APPROCCE
     *
     * The second parameter is to store the height of tree.
     * Initially, we need to pass a pointer to a location with value
     * as 0. So, function should be used as follows:
     *
     * int height = 0;
     * struct node *root = SomeFunctionToMakeTree();
     * int diameter = diameterOpt(root, &height);
     * @param root
     * @param height
     * @return
     */
    int diameterOpt(struct node *root, int *height) {
        /* lh --> Height of left subtree
           rh --> Height of right subtree */
        int lh = 0, rh = 0;

        /* ldiameter  --> diameter of left subtree
           rdiameter  --> Diameter of right subtree */
        int ldiameter = 0, rdiameter = 0;

        if (root == NULL) {
            *height = 0;
            return 0; /* diameter is also 0 */
        }

        /* Get the heights of left and right subtrees in lh and rh
          And store the returned values in ldiameter and ldiameter */
        ldiameter = diameterOpt(root->left, &lh);
        rdiameter = diameterOpt(root->right, &rh);

        /* Height of current node is max of heights of left and
           right subtrees plus 1*/
        *height = max(lh, rh) + 1;

        return max(lh + rh + 1, max(ldiameter, rdiameter));
    }


};


int main() {

    TreeNode *head = NULL;
    Solution sol;


    head = sol.Insertion(head, 1);
    sol.Insertion(head, 2);
    sol.Insertion(head, 3);
    sol.Insertion(head, 4);
    sol.Insertion(head, 5);
    //sol.Insertion(head, 6);
    //sol.Insertion(head, 7);


    TreeNode *root = NULL;
    root = sol.NewNode(1);
    root->left = sol.NewNode(2);
    root->right = sol.NewNode(3);
    root->left->left = sol.NewNode(4);
    root->left->right = sol.NewNode(5);
/*    root->right->left = sol.NewNode(6);
    root->right->right = sol.NewNode(7);*/

    sol.InOrder(root);
    NL;
    sol.preOrder(root);
    NL;
    sol.postOrder(root);
    NL;
    cout << "The diameter is -> " << sol.getDiameter(root) << endl;
    return 0;
}



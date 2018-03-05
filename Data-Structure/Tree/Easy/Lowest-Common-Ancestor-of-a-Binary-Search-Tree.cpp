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
     * A Utility function to print link list
     * @param node
     */
    void printLinkList(struct TreeNode *node) {
        while (node != null) {
            printf("%d -> ", node->value);
            node = node->next;
        }
        NL;
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
     * Finds the path from root node to given root of the tree, Stores the
     * path in a vector path[], returns true if path exists otherwise false
     * @param root
     * @param path
     * @param val
     * @return
     */
    bool findPath(struct TreeNode *root, vector<int> &path, int val) {

        // Base Case
        if (root == NULL) {
            return false;
        }

        // Store this node value in path vector. The node will be removed if not in path root to val
        path.push_back(root->value);

        // See if the val is same as root value;
        if (root->value == val) {
            return true;
        }

        // Check if val is found on the left or right sub tree
        if ((root->left && findPath(root->left, path, val))
            ||
            (root->right && findPath(root->right, path, val))) {
            return true;
        }

        // If not present in subtree rooted with root, remove root from
        // path[] and return false
        path.pop_back();

        return false;
    }


    /**
     * Returns LCA if node n1, n2 are present in the given binary tree
     * otherwise return -1
     * @param root
     * @param n1
     * @param n2
     * @return
     */
    int findLCA(struct TreeNode *root, int n1, int n2) {
        // To store paths for n1 and n2 from the root
        vector<int> path1, path2;

        // Find paths from root to n1 and root to n1. If either n1 or n2
        // is not present, return -1
        if (!findPath(root, path1, n1)
            ||
            !findPath(root, path2, n2)) {
            return -1;
        }

        // Compare the paths to get the first different value
        int i = 0;
        while (i < path1.size() && i < path2.size()) {
            if (path1[i] != path2[i]) {
                break;
            }
            i++;
        }
        return path1[i - 1];
    }

    /**
     * This function returns pointer to LCA of two given values n1 and n2.
     * This function assumes that n1 and n2 are present in Binary Tree
     * @param root
     * @param n1
     * @param n2
     * @return
     */
    struct TreeNode *findLCASingleTraversal(struct TreeNode *root, int n1, int n2) {
        // Base Case
        if (root == NULL) {
            return root;
        }

        // If either n1 or n2 matches with root's key, report
        // the presence by returning root (Note that if a key is
        // ancestor of other, then the ancestor key becomes LCA
        if (root->value == n1 || root->value == n2) {
            return root;
        }

        // Look for keys in left and right subtrees
        TreeNode *leftLCA = findLCASingleTraversal(root->left, n1, n2);
        TreeNode *rightLCA = findLCASingleTraversal(root->right, n1, n2);

        // If both of the above calls return Non-NULL, then one key
        // is present in once subtree and other is present in other,
        // So this node is the LCA
        if (leftLCA && rightLCA) {
            return root;
        }

        // Otherwise check if left subtree or right subtree is LCA
        if (leftLCA != NULL) {
            return leftLCA;
        } else {
            return rightLCA;
        }
    }

    /**
     * This function returns pointer to LCA of two given values p and q.
     * This function assumes that n1 and n2 are present in Binary Tree
     * @param root
     * @param p
     * @param q
     * @return
     */
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        // Base Case
        if (root == NULL) {
            return root;
        }

        // If either n1 or n2 matches with root's key, report
        // the presence by returning root (Note that if a key is
        // ancestor of other, then the ancestor key becomes LCA
        if (root->value == p->value || root->value == q->value) {
            return root;
        }

        // Look for keys in left and right subtrees
        TreeNode *leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode *rightLCA = lowestCommonAncestor(root->right, p, q);

        // If both of the above calls return Non-NULL, then one key
        // is present in once subtree and other is present in other,
        // So this node is the LCA
        if (leftLCA && rightLCA) {
            return root;
        }

        // Otherwise check if left subtree or right subtree is LCA
        if (leftLCA != NULL) {
            return leftLCA;
        } else {
            return rightLCA;
        }
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
    sol.Insertion(head, 6);
    sol.Insertion(head, 7);


    TreeNode *root = NULL;
    root = sol.NewNode(1);
    root->left = sol.NewNode(2);
    root->right = sol.NewNode(3);
    root->left->left = sol.NewNode(4);
    root->left->right = sol.NewNode(5);
    root->right->left = sol.NewNode(6);
    root->right->right = sol.NewNode(7);

    printf("LCA -> head (4, 5) = %d", sol.findLCA(head, 4, 5));
    NL;
    printf("LCA -> head (4, 6) = %d", sol.findLCA(head, 4, 6));
    NL;
    printf("LCA -> head (3, 4) = %d", sol.findLCA(head, 3, 4));
    NL;
    printf("LCA -> head (2, 4) = %d", sol.findLCA(head, 2, 4));
    NL;
    NL;

    printf("LCA -> root (4, 5) = %d", sol.findLCA(root, 4, 5));
    NL;
    printf("LCA -> root (4, 6) = %d", sol.findLCA(root, 4, 6));
    NL;
    printf("LCA -> root (3, 4) = %d", sol.findLCA(root, 3, 4));
    NL;
    printf("LCA -> root (2, 4) = %d", sol.findLCA(root, 2, 4));

    return 0;
}

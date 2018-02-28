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
    int val;
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

        node->val = val;
        node->left = node->right = null;
        return (node);
    }


    /**
     * A Utility function to print link list
     * @param node
     */
    void printLinkList(struct TreeNode *node) {
        while (node != null) {
            printf("%d -> ", node->val);
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
        if (value < node->val) {
            node->left = Insertion(node->left, value);
        } else if (value > node->val) {
            node->right = Insertion(node->right, value);
        }

        /* return the (unchanged) node pointer */
        return node;
    }

    void findAverageOfLevels(TreeNode *root) {
        vector<double> res;

        queue<TreeNode *> mainQ;
        mainQ.push(root);

        while (!mainQ.empty()) {
            double sum = 0;
            int cnt = mainQ.size(), i = 0;
            queue<TreeNode *> tempQ;

            while (i < cnt) {
                TreeNode *n = mainQ.front();
                mainQ.pop();

                sum += n->val;
                i++;

                if (n->left != NULL) {
                    mainQ.push(n->left);
                }
                if (n->right != NULL) {
                    mainQ.push(n->right);
                }
            }

            // mainQ = tempQ;
            cout << "The average level of Binary tree is " << (sum * 1.0 / cnt) << " ";
            NL;
        }
    }

    vector<double> averageOfLevelsList(TreeNode *root) {
        vector<double> res;

        queue<TreeNode *> mainQ;
        mainQ.push(root);

        while (!mainQ.empty()) {
            double sum = 0;
            int cnt = mainQ.size(), i = 0;

            while (i < cnt) {
                TreeNode *n = mainQ.front();
                mainQ.pop();

                sum += n->val;
                i++;

                if (n->left != NULL) {
                    mainQ.push(n->left);
                }
                if (n->right != NULL) {
                    mainQ.push(n->right);
                }
            }
            res.push_back((sum * 1.0 / cnt));
        }
        return res;
    }

};


int main() {

    TreeNode *head = NULL;
    Solution sol;


    head = sol.Insertion(head, 4);
    sol.Insertion(head, 2);
    sol.Insertion(head, 9);
    sol.Insertion(head, 3);
    sol.Insertion(head, 8);
    sol.Insertion(head, 7);


    TreeNode *root = NULL;
    root = sol.NewNode(4);
    root->left = sol.NewNode(2);
    root->right = sol.NewNode(9);
    root->left->left = sol.NewNode(3);
    root->left->right = sol.NewNode(8);
    root->right->right = sol.NewNode(7);

    sol.findAverageOfLevels(root);
    NL;
    return 0;
}


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void countNodes(TreeNode* root, int &count)
    {
        if(root==NULL) return;
        if(root->left!=NULL && root->left->left == NULL && root->left->right == NULL) count = count + root->left->val;
        countNodes(root->left, count);
        countNodes(root->right, count);
    };
    int sumOfLeftLeaves(TreeNode* root) {
        int count =0;
        countNodes(root, count);
        return count;
    }
};

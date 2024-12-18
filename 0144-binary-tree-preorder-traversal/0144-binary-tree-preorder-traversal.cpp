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
    void preorder(vector<int>&order,TreeNode* node){
        if(!node) return;
        order.push_back(node->val);
        preorder(order,node->left);
        preorder(order,node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorderT;
        preorder(preorderT,root);
        return preorderT;
    }
};
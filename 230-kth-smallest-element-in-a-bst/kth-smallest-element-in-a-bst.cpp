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
    vector<int>vt;
    void bianli(TreeNode* root){
        if(root==nullptr)return ;
        bianli(root->left);
        vt.push_back(root->val);
        bianli(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        //遍历树，将元素存入数组，数组排序，返回下标的值
        bianli(root);
        return vt[k-1];
    }
};
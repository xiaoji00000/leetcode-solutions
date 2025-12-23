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
    //创建块内数组
    vector<int>vt;
    void inorder(TreeNode* root){
        if(root!=nullptr)inorder(root->left);
        if(root!=nullptr)vt.push_back(root->val);
        if(root!=nullptr)inorder(root->right);
    }
    //利用函数递归调用实现遍历
        //遍历树，将元素添加进数组
    vector<int> inorderTraversal(TreeNode* root) {
        //调用递归函数
        inorder(root);
        return vt;
        //返回数组
    }
};
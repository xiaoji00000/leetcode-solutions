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
    unordered_map<int,int>mp;
    vector<int>pre;
    TreeNode* build(vector<int>&inorder,int left,int right,int &index){
        if(left>right)return NULL;
        TreeNode*root=new TreeNode(pre[index]);
        int k=mp[pre[index]];
        index++;
        root->left=build(inorder,left,k-1,index);
        root->right=build(inorder,k+1,right,index);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        pre=preorder;
        for(int i=0;i<preorder.size();i++){
            mp[inorder[i]]=i;
        }
        int index=0;
        return build(inorder,0,preorder.size()-1,index);
    }
};
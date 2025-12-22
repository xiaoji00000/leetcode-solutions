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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //创建二维数组
        vector<vector<int>>dvt;
        //创建deque
        deque<TreeNode*>dq;
        if(root!=nullptr)dq.push_back(root);
        while(!dq.empty()){
            vector<int>curr;
            int times=dq.size();
            for(int i=0;i<times;i++){
                if(dq.front()->left!=nullptr)dq.push_back(dq.front()->left);
                if(dq.front()->right!=nullptr)dq.push_back(dq.front()->right);
                curr.push_back(dq.front()->val);
                dq.pop_front();
            }
            dvt.push_back(curr);

        }
        return dvt;
        //while循环
            //创建新的数组并加入到二维数组
        //返回二维数组
    }
};
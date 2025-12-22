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
    int maxDepth(TreeNode* root) {
        //全局变量depth,counter
        int depth=0;
        deque<TreeNode*>dq;
        if(root!=nullptr)dq.push_back(root);
        while(not dq.empty()){
            int times=dq.size();
            for(int i=0;i<times;i++){
                if(dq.front()->left!=nullptr)dq.push_back(dq.front()->left);
                if(dq.front()->right!=nullptr)dq.push_back(dq.front()->right);
                dq.pop_front();
            }
            depth++;
        }
        return depth;
        //容器deque
        //while循环
        //返回depth
    }
};
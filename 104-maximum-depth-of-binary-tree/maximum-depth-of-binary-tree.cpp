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
        //层序遍历的办法得到深度
        int depth=0;
        deque<TreeNode*>dq;
        if(root!=NULL)
            dq.push_back(root);
        while(not dq.empty()){
            int times=dq.size();
            for(int i=0;i<times;i++){
                if(dq.front()->left!=NULL)dq.push_back(dq.front()->left);
                if(dq.front()->right!=NULL)dq.push_back(dq.front()->right);
                dq.pop_front();
            }
            depth++;
        }
        return depth;
        //创建整数变量记录深度
        //创建队列记录下一次需要遍历的节点
        //循环层序遍历
        //返回深度
    }
};
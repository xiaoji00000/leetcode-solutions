class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>vt(nums.size()-k+1,0);
        deque<int>dq;
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            while(!dq.empty()&&nums[dq.back()]<curr){
                dq.pop_back();
            }
            dq.push_back(i);
            if(!dq.empty()&&dq.front()<=i-k)dq.pop_front();
            if(i>=k-1)vt[i-k+1]=nums[dq.front()];
        }
        return vt;
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow=0,fast=0;
        for(;fast<nums.size();fast++){
            if(nums[fast]!=val){
                nums[slow++]=nums[fast];
            }
        }
        return slow;
    }
};
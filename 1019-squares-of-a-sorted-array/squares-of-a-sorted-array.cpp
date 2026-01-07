class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto&n:nums){
            n=n*n;
        }
        int length=nums.size();
        vector<int>ans(length);
        int left=0,right=length-1;
        int index=nums.size()-1;
        while(left<=right){
            ans[index--]=nums[left]>=nums[right]?nums[left++]:nums[right--];
        }
        return ans;

    }
};
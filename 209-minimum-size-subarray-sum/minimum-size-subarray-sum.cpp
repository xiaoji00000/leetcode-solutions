class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,right=0;
        int cur_sum=nums[left];
        int min_size=nums.size()+1;
        while(true){
            if(cur_sum<target){
                if(++right<nums.size()){
                    cur_sum+=nums[right];
                }
                else{
                    break;
                }
            }
            else{
                int cur_size=right-left+1;
                min_size=min(cur_size,min_size);
                cur_sum-=nums[left];
                left++;
            }
        }
        if(min_size!=nums.size()+1)return min_size;
        return 0;
    }
};
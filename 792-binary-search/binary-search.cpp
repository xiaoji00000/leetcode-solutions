class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length=nums.size()-1;
        int left=0,right=length;
        int index=(left+right)/2;
        while(index!=left&&index!=right){
            if(nums[index]==target)return index;
            else if(nums[index]<target){
                left=index;
                index=(left+right)/2;
            }
            else{
                right=index;
                index=(left+right)/2;
            }
        }
        if(nums[left]==target)return left;
        if(nums[right]==target)return right;
        return -1;
    }
};
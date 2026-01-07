class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto&n:nums){
            n=n*n;
        }
        sort(nums.begin(),nums.end(),[](const auto&a,const auto&b){
            return a<b;
        });
        return nums;

    }
};
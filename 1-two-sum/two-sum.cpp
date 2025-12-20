class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;//val,indices
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                vector<int>vt;
                vt.push_back(mp[nums[i]]);
                vt.push_back(i);
                return vt;
            }
            else{
                mp[target-nums[i]]=i;
            }
        }
        return {};
    }
};
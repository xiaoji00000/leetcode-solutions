class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>vt;
        for(const auto&n:nums){
            vt.push_back(n*n);
        }
        sort(vt.begin(),vt.end(),[](const auto&a,const auto&b){
            return a<b;
        });
        return vt;

    }
};
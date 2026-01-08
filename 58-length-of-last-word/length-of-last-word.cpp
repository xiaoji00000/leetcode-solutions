class Solution {
public:
    int lengthOfLastWord(string s) {
        int right=s.size()-1;
        bool is_starte=false;
        while(right>=0&&s[right]==' '){
            right--;
        }
        if(right>=0)is_starte=true;
        int ans=0;
        while(right>=0&&s[right--]!=' '){
            ans++;
        }
        return ans;
    }
};
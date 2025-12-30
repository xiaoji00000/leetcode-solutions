class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(const auto&n:s){
            if(n=='(')st.push(')');
            else if(n=='{')st.push('}');
            else if(n=='[')st.push(']');
            else{
                if((!st.empty())&&(st.top()==n)){
                    st.pop();
                }
                else return false;
            } 
        }
        if(st.empty())return true;
        return false;
    }
    
};
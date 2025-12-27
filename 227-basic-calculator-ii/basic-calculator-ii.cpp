class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        char operators='+';
        long long num=0;
        for(auto &nn:s){
            if(nn==' ')continue;
            if(isdigit(nn)){
                num=num*10+nn-'0';
            }
            else{
                if(operators=='+'){
                    st.push(num);
                }
                if(operators=='-'){
                    st.push(-num);
                }
                if(operators=='*'){
                    st.top()*=num;
                }
                if(operators=='/'){
                    st.top()/=num;
                }
                operators=nn;
                num=0;
            }
            
        }
        if(operators=='+'){
            st.push(num);
        }
        if(operators=='-'){
            st.push(-num);
        }
        if(operators=='*'){
            st.top()*=num;
        }
        if(operators=='/'){
            st.top()/=num;
        }
        long long sum=0;
            while(!st.empty()){
                sum+=st.top();
                st.pop();
            }
            return sum;
    }
};
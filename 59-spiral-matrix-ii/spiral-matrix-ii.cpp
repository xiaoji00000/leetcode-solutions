class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>vvt(n,vector<int>(n,0));
        int left=0,top=0,right=n-1,bottom=n-1;
        int state=0;
        int k=1;
        while(left<=right&&top<=bottom){
            if(state==0){
                for(int i=left;i<=right;i++){
                    vvt[top][i]=k++;
                }
                state=1;
                top++;
            }
            if(state==1){
                for(int i=top;i<=bottom;i++){
                    vvt[i][right]=k++;
                }
                state=2;
                right--;
            }
            if(state==2){
                for(int i=right;i>=left;i--){
                    vvt[bottom][i]=k++;
                }
                state=3;
                bottom--;
            }
            if(state==3){
                for(int i=bottom;i>=top;i--){
                    vvt[i][left]=k++;
                }
                state=0;
                left++;
            }
            
        }
        return vvt;
    }
};
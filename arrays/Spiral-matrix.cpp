vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
    int t=0,b=A.size()-1,l=0,r=A[0].size()-1;
    int dir=0;
    vector<int> ans;
    while(t<=b && l<=r){
        if(dir==0){
            for(int i=l;i<=r;i++){
                ans.push_back(A[t][i]);
            }
            t++;
            dir=1;
        }
        else if(dir==1){
            for(int i=t;i<=b;i++){
                ans.push_back(A[i][r]);
            }
            r--;
            dir=2;
        }
        else if(dir==2){
            for(int i=r;i>=l;i--){
                ans.push_back(A[b][i]);
            }
            b--;
            dir=3;
        }
        else if(dir==3){
            for(int i=b;i>=t;i--){
                ans.push_back(A[i][l]);
            }
            l++;
            dir=0;
        }
    }
    return ans;
    
}


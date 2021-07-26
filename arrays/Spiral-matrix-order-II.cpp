vector<vector<int> > Solution::generateMatrix(int A) {
vector<vector<int>> ans(A,vector<int> (A,0));
        int L=0,R=A-1,T=0,B=A-1;
        int dir=1;
        int k=1;
        while(L<=R && T<=B){
            if(dir==1){
                for(int i=L;i<=R;i++){
                    ans[T][i]=k++;
                }
                dir=2;
                T++;
            } else if(dir==2){
                for(int i=T;i<=B;i++){
                    ans[i][R]=k++;
                }
                dir=3;
                R--;
            } else if(dir==3){
                for(int i=R;i>=L;i--){
                    ans[B][i]=k++;
                }
                dir=4;
                B--;
            } else {
                for(int i=B;i>=T;i--){
                    ans[i][L]=k++;
                }
                dir=1;
                L++;
            }
        }
        return ans;
    }

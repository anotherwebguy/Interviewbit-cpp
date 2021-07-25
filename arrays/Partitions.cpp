int Solution::solve(int A, vector<int> &B) {
   int sum=0,count=0,currsum=0;
        for(int i=0;i<A;i++){
            sum+=B[i];
        }
        if(sum%3!=0) return 0;
        sum=sum/3;
        vector<int> prefix,suffix;
        for(int i=0;i<A;i++){
            currsum+=B[i];
            if(currsum==sum){
                prefix.push_back(i);
            }
        }
        currsum=0;
        for(int i=A-1;i>=0;i--){
            currsum+=B[i];
            if(currsum == sum){
                suffix.push_back(i);
            }
        }
        for(int i=0;i<prefix.size();i++){
            for(int j=0;j<suffix.size();j++){
                int x=0,n=0;
                for(int k=prefix[i]+1;k<suffix[j];k++){
                    x+=B[k];
                    n=1;
                }
                if(x==sum && n==1){
                    count++;
                }
            }
        }
        return count;
}

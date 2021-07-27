int Solution::solve(vector<string> &A) {
int n=A.size();
        vector<float> B(n);
        for(int i=0;i<n;i++){
            B[i]=stof(A[i]);
        }
        if(n<3) return 0;
        float a=B[0],b=B[1],c=B[2];
        for(int i=3;i<n;i++){
            float sum=a+b+c;
            if(sum>1 && sum<2){
                return 1;
            }
            if(sum>=2){
                if(a>b && a>c){
                    a=B[i];
                } else if(b>a && b>c){
                    b=B[i];
                } else {
                    c=B[i];
                }
            } else {
                if(a<b && a<c){
                    a=B[i];
                } else if(b<a && b<c){
                    b=B[i];
                } else {
                    c=B[i];
                }
            }
        }
        if(a+b+c>1 && a+b+c<2) return 1;
        return 0;
}

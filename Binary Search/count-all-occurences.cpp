int Solution::findCount(const vector<int> &A, int B) {
        int n=A.size();
        int i,l=0,h=n-1;
        while(l<=h){
            int m=(l+h)>>1;
            if(A[m]<B){
                l=m+1;
            } else if(A[m]>B){
                h=m-1;
            } else {
                i=m;
                break;
            }
        }
        int count=0;
        int x=i;
        while(A[x]==B && x<n){
            count++;
            x++;
        }
        i--;
        while(A[i]==B && i>=0){
            count++;
            i--;
        }
        return count;
}

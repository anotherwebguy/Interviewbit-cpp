int Solution::maximumGap(const vector<int> &A) {
if(A.size()<2) return 0;
vector<int> B = A;
sort(B.begin(),B.end());
int max = 0;
for(int i=0;i<B.size()-1;i++){
    if(B[i+1]-B[i] > max)
    max = B[i+1]-B[i];
}
return max;
}

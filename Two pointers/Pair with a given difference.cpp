
int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int N=A.size()-1;
    int i = 0, j = 1, diff = 0; 
    while(i <= N && j <=N){ 
        diff = A[j] - A[i]; 
        if(i != j && diff == B) return 1;
        else if(diff < B) j++; 
        else i++;
    } 
    return 0;
}

int Solution::titleToNumber(string A) {
    int n = A.size(); int sum=0;
    for(int i=0;i<n;i++){
        sum = sum*26 + A[i] - 'A' + 1;
    }
    return sum;
}

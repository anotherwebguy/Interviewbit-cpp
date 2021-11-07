int Solution::largestRectangleArea(vector<int> &A) {
    int n = A.size();
    int left[n],right[n];
    stack<int> s1,s2;
    if(A.size()==1) return A[0];
    for(int i=0;i<n;i++){
        while(!s1.empty() && A[s1.top()]>=A[i]) s1.pop();
        if(s1.empty()) left[i]=0;
        else left[i]=s1.top()+1;
        s1.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!s2.empty() && A[s2.top()]>=A[i]) s2.pop();
        if(s2.empty()) right[i]=n-1;
        else right[i]=s2.top()-1;
        s2.push(i);
    }
    int max_area=0;
    for(int i=0;i<n;i++){
        max_area=max(max_area,(right[i]-left[i]+1)*A[i]);
    }
    return max_area;
}

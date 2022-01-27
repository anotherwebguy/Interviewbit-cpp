int Solution::canJump(vector<int> &A) {
    if(A.size() == 0 || A.size() == 1){
        return 1;
    }
    
    vector<int> temp(A.size(), 0);
    
    int closest = A.size()-1;
    
    for(int i = temp.size()-2; i >= 0; i--){
        if(A[i] - closest + i >= 0){
            closest = i;
            temp[i] = 1;
        }
    }
    
    return temp[0];
}


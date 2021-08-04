string Solution::solve(string A) {
        int x=next_permutation(A.begin(),A.end());
        if(x){
            return A;
        }
        return "-1";
}

int Solution::maxSubArray(const vector &A) {


int max_so_far = INT_MIN;
int max_ending = 0;
for(int i=0;i<A.size() ; i++){
    max_ending = max_ending+A[i];
    
    if(max_so_far < max_ending)
        max_so_far = max_ending;
    
    if(max_ending < 0)
        max_ending = 0;
    
}
return max_so_far;

}

int Solution::firstMissingPositive(vector<int> &A) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    int n=A.size();
    
    for(int i = 0; i < n; ++i)
    {   
        if (A[i] > 0 && A[i] <= n) {
            int idx = A[i] - 1;
            
            if (A[idx] != A[i]) 
            {
                swap(A[idx], A[i]);
                i--;
            }
        }
        
    }
    
    for(int i = 0; i < n; ++i) 
    {   
        if(A[i] != i + 1)
            return i + 1;
    }
    
    return n + 1;
    
}
 

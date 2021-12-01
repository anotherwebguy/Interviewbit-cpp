vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    priority_queue<int, vector<int>, greater<int>> pqS;
    vector<int> sol(C);
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    for(int i=0;i<C;i++)
    {
        for(int j=0;j<C;j++)
        {
            int val = A[i]+B[j];
            if(pqS.size()<C)
                pqS.push(val);
            else
            {
                if(pqS.top()<val)
                {
                    pqS.pop();
                    pqS.push(val);
                }
                else
                    break;
            }
        }
    }
    for(int i=C-1;i>=0;i--)
    {
        sol[i]=(pqS.top());
        pqS.pop();
    }
    return sol;  
}

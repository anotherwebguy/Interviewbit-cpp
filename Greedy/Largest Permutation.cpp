static bool comparator(int a,int b)
{
    return a>=b;
}

vector<int> Solution::solve(vector<int> &A, int B) {
    int m[A.size()+1];
    for(int i=0;i<A.size();i++)
    {
        m[A[i]]=i;
    }
    vector<int>aux=A;
    sort(aux.begin(),aux.end(),comparator);
    for(int i=0;i<A.size();i++)
    {
        if(B>0)
        {
            if(A[i]!=aux[i])
            {
                int index=m[aux[i]];
                swap(m[A[i]],m[A[index]]);
                swap(A[i],A[index]);
                B--;
            }
        }
        else
        {
            break;
        }
    }
    return A;
}

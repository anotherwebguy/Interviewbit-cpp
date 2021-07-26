vector<vector<int> > Solution::solve(int A) {
vector<vector<int>>vec;
for(int i=0;i<A;i++)
{
    if(i==0)
    {
        vector<int>temp;
        temp.push_back(1);
        vec.push_back(temp);
    }
    else if(i==1)
    {
        vector<int>temp;
        temp.push_back(1);
        temp.push_back(1);
        vec.push_back(temp);
    }
    else
    {
        vector<int>temp(i+1,1);
        for(int j=1;j<i;j++)
        {
            temp[j] = vec[i-1][j] + vec[i-1][j-1];
        }
        vec.push_back(temp);
        
    }
    
}

return vec;
}

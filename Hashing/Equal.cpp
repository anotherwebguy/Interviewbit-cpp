vector<int> Solution::equal(vector<int> &A) {
    unordered_map<int,pair<int,int>> m;
    vector<int> res;
    for(int i=0;i<A.size()-1;i++){
        for(int j=i+1;j<A.size();j++){
            int sum = A[i]+A[j];
            if(m.find(sum)!=m.end()){
                pair<int,int> p=m[sum];
                if (p.first < i && p.second != i && p.second != j)
                {
                    vector<int> temp;
                    temp.emplace_back(p.first);
                    temp.emplace_back(p.second);
                    temp.emplace_back(i);
                    temp.emplace_back(j);
                    
                    if (res.size() == 0)
                        res = temp;
                    else
                    {
                        for (auto t = 0; t<res.size(); ++t)
                        {
                            if (res[t] < temp[t])
                                break;
                            if (res[t] > temp[t])
                            {
                                res.clear();
                                res = temp;
                                break;
                            }
                        }
                    }
                }    
            } else {
                m[sum]={i,j};
            }
        }
    }
    return res;

}

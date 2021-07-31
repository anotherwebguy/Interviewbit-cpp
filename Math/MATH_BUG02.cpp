vector<vector<int> > Solution::squareSum(int A) {
        vector<vector<int>> ans;
        for(int a=0;a*a<A;a++){
            for(int b=0;b*b<A;b++){
                if(a<=b && a*a+b*b==A){
                    vector<int> newentry;
                    newentry.push_back(a);
                    newentry.push_back(b);
                    ans.push_back(newentry );
                }
            }
        }
        return ans;
       }

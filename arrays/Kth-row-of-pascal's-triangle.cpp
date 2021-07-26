        int combi(int n,int k) { 
        int ans=1; 
        k=k>n-k?n-k:k; 
        int j=1; 
        for(;j<=k;j++,n--) { 
            if(n%j==0) { 
                ans*=n/j; 
            } else if(ans%j==0) { 
                ans=ans/j*n; 
            }else { 
                ans=(ans*n)/j; 
            } 
        } 
        return ans;
        }

        vector<int> Solution::getRow(int A) {
           vector<int> ans;
           for(int i=0;i<A+1;i++){
               int x = combi(A,i);
               ans.push_back(x);
           }
           return ans;
        }

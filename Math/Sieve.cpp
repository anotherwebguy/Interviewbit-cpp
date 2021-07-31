vector<int> seive(int A){
           bool isPrime[A+1];
           memset(isPrime,true,sizeof(isPrime));
           vector<int> ans;
           for(int p=2;p*p<=A;p++){
               if(isPrime[p]){
                   for(int i=p*p;i<=A;i+=p){
                       isPrime[i]=false;
                   }
               }
           }
           for(int i=2;i<=A;i++){
               if(isPrime[i]){
                   ans.push_back(i);
               }
           }
           return ans;
       }

bool isPrime(int A) { 
          int upperLimit = round(sqrt(A)); 
          if(A > 1){ 
                for (int i = 2; i <= upperLimit; i++) { 
                        if (A % i == 0){ 
                             return 0; 
                        } 
                } 
         } else{ 
               return 0; 
         } 
         return 1;
    }
    
    vector<int> Solution::primesum(int A) {
         vector<int> ans;
         for(int i=A-1;i>=A/2;i--){
             if(isPrime(i) && isPrime(A-i)){
                 ans.push_back(A-i);
                 ans.push_back(i);
                 break;
             }
         }
         return ans;

    }

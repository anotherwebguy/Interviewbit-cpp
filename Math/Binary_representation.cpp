string Solution::findDigitsInBinary(int A) {
       string ans;
       if(A==0){
           ans+=to_string(0);
           return ans;
       }
       while(A!=0){
           ans+=to_string(A%2);
           A=A/2;
           
       }
       reverse(ans.begin(),ans.end());
       return ans;
}

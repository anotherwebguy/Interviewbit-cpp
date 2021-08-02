int Solution::isPalindrome(int A) {
        string s=to_string(A);
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1]){
                return 0;
            }
        }
        return 1;
}

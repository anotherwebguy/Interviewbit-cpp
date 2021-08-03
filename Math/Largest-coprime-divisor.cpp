int Solution::cpFact(int A, int B) {
       int a=A,b=B;
        while(__gcd(a,b)!=1){
            a/=__gcd(a,b);
        }
        return a;
}

int Solution::isPrime(int A) {
    int upperLimit = round(sqrt(A));
    if(A > 1){
        for (int i = 2; i <= upperLimit; i++) {
            if (A % i == 0){
                return 0;
            }
        }
    }
    else{
        return 0;
    }
    return 1;
}

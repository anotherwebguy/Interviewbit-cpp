string convert(string A,int B){
    if(B==1) return A;
    string a;
    for(int i=0; i<B; i++){
        int j=i;
        int x=1;
        bool f=true;
        while(j<A.length()){
            if(x!=0) a.push_back(A[j]);
            x = f ? 2*(B-1-i) : 2*i;
            j+=x;
            f=!f;
        }
    }
    return a;
}

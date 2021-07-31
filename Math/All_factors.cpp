vector<int> Solution::allFactors(int A) {
        vector <int> one,two;
        for(int i=1;i<=sqrt(A);i++){
            if(A%i==0){
                if(A/i==i){
                    one.push_back(i);
                } else {
                    one.push_back(i);
                    two.push_back(A/i);
                }
            }
        }
        for(int i=two.size()-1;i>=0;i--){
            one.push_back(two[i]);
        }
        return one;
}

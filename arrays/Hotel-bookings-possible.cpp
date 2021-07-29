bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
       int n=arrive.size();
        sort(arrive.begin(),arrive.end());
        sort(depart.begin(),depart.end());
        int i=0,j=0;
        int cnt=0,ans=0;
        while(i<n && j<n){
            if(arrive[i]<depart[j]){
                cnt++;
                i++;
            } else {
                cnt--;
                j++;
            }
            ans=max(ans,cnt);
        }
        if(ans<=K){
            return 1;
        }
        return 0;
}

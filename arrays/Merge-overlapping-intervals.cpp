bool compare(Interval a,Interval b){
    return (a.start<b.start);
}

vector<Interval> Solution::merge(vector<Interval> &A) {
   sort(A.begin(),A.end(),compare);
        vector<Interval> res; 
        int n=A.size(); 
        res.push_back(A[0]); 
        for(int i=1;i<n;i++){ 
          if(A[i].start<=res[res.size()-1].end) res[res.size()-1].end=max(res[res.size()-1].end,A[i].end); 
          else res.push_back(A[i]); 
          } 
          return res;
    }

bool compare(Interval a,Interval b){
    return (a.start<b.start);
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
     vector<Interval> res; 
        int n=intervals.size(); 
        res.push_back(intervals[0]); 
        for(int i=1;i<n;i++){ 
          if(intervals[i].start<=res[res.size()-1].end)
  res[res.size()-1].end=max(res[res.size()-1].end,intervals[i].end); 
          else res.push_back(intervals[i]); 
          } return res;
    }

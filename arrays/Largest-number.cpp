bool com(const int &a,const int &b){
string s1=to_string(a)+to_string(b);
string s2=to_string(b)+to_string(a);

return s1>s2; 

}
string Solution::largestNumber(const vector<int> &A) {
vector<int> b(A.size());
for(int i=0;i<A.size();i++){
    b[i]=A[i];
}

string ans="";
sort(b.begin(),b.end(),com);
if(b[0]==0){
    ans="0";
    return ans;
}
for(auto i:b){
ans+=to_string(i);
}
return ans;
}

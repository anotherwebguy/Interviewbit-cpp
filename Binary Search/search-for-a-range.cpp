vector<int> Solution::searchRange(const vector<int> &A, int B) {
if(binary_search(A.begin(),A.end(),B))
{
auto itl = lower_bound(A.begin(), A.end(), B);
auto itu = upper_bound(A.begin(), A.end(), B);
int x=itl-A.begin();
int y=itu-A.begin();
return {x,y-1};
}
else return {-1,-1};
}

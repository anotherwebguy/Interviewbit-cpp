string soln(string A,int B){
string ans;
for(int i=0;i<A.size();i++)
{int count=1;
while(A[i]==A[i+1])
{
count++;
i++;
}
if(count==B)
continue;
else
ans+=A[i];
}
return ans;
}

int soln(string A) {
int cnt=0;
int i=A.size()-1;

while(A[i]==' ' && i>=0)
    i--;

while(i>=0 && A[i]!=' ')
{
    cnt++;
    i--;
}
return cnt;
}

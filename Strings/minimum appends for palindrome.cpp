int soln(string A) {
int n = A.size();

int l=0,r=n-1;

int temp=0;

while(l<=r)

{

if(A[l]!=A[r])

{

r=n-1;

temp++;

l = temp;

}

else

{

l++;

r–-;

}

}

return temp;
}

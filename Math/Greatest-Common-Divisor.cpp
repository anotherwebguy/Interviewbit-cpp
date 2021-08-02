int Solution::gcd(int A, int B) {
int k;
if(A==0) return B;
if(B==0) return A;
if(A>B) k=B;
else k=A;

for(int i=k;i>0;i--)
{
    if((A%i==0)&&(B%i==0))
    {
        return i;
    } }
}

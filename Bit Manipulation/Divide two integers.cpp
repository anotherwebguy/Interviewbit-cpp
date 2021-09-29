int solution(int dividend, int divisor){
if( divisor == 0 ) return INT_MAX; // divide by zero

if( divisor == 1 ) return dividend;

if( divisor == -1 ) return ( dividend == INT_MIN ) ? INT_MAX : -dividend;

if( dividend == divisor ) return 1;

if( divisor == INT_MIN ) return 0;


    int sign=((dividend<0)^(divisor<0)) ? -1:1;
    long res=0;
    int a=abs(dividend);
    int b=abs(divisor);
    while(a-b>=0){
        int x=0;
        while((a-(b<<1<<x))>=0){
            x++;
        }
        res+=1<<x;
        a-=b<<x;
    }
    return sign*res;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,i;
    long long int sq=0,ss,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        ss=s*s;
        sq=sq+i*i;
    }
    d=abs(sq-ss);
    printf("%lld",d);
    
}

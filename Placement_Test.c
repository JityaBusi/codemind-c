#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,x,y;
        scanf("%d%d",&a,&b);
        x=a/10;
        y=x*b;
        printf("%d
",y);
    }
}


#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(21-(n+m)<=10)
    {
        printf("%d",21-(n+m));
    }
    else
    {
        printf("-1");
    }
}
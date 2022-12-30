#include<stdio.h>
int sq(int );
int rev(int);
int main()
{
    int n,a,g,z;
    scanf("%d",&n);
    a=sq(n);
    z=rev(n);
    g=sq(rev(n));
    if(a==rev(g))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
int sq(int n)
{
    int l=n*n;
    return l;
}
int rev(int n)
{
    int r,z=0;
    while(n!=0)
    {
        r=n%10;
        z=z*10+r;
        n=n/10;
    }
    return z;
}

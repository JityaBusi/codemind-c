#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        if((x<y&&y<z)||(z<y&&y<x))
        {
            printf("%d
",y);
        }
        else if((y<z&&z<x)||(x<z&&z<y))
        {
            printf("%d
",z);
        }
        else if ((z<x&&x<y)||(y<x&&x<z))
        {
             printf("%d
",x);
        }
    }
}

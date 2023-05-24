#include <stdio.h>
int main()
{
	int n,r,ce=0,co=0;
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		if(r%2==0)
		{
			ce++;
		}
		else
		{
			co++;
			
		}
	}
	if(ce>0&&co==0)
	{
	    printf("Even");
	}
	else if(co>0&&ce==0)
	{
	    printf("Odd");
	}
	else
	{
	    printf("Mixed");
	}
}



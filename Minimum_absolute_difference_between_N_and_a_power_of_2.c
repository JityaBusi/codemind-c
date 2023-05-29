#include <stdio.h>
#include <math.h>
int main() 
{
	int n,l,r,res=0;
	scanf("%d",&n);
	int p2p,n2p,x=1;
	while(x<=n)
	{
		if(x<=n)
		p2p=x;
		x=x*2;
	}
	n2p=x;
	res=n-p2p<=n2p-n ? n-p2p:n2p-n;
	printf("%d",res);
}

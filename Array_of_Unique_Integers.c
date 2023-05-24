#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]); 
	}
	float max=arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i]<max)
		{
			max = arr[i];
		}
	}
	float min=arr[0];
	for(i=0; i<n; i++)
	{
		if(arr[i]>min)
		{
			min = arr[i];
		}
	}
	float sum=0,c=0;
	for(i=0;i<n;i++)
	{
	    if(arr[i]!=min && arr[i]!=max)
	    {
	        sum+=arr[i];
	        c++;
	    }
	}
	printf("%.5f",sum/c);
}
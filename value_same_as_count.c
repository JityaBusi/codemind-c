#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	for(i=0; i<n; i++) 
	{
		scanf("%d", &arr[i]); 
	}
	int vis[101] = {};
	int found=0, j;
	int count=0;
	for(i=0;i<n;i++)
	{
	    int cnt = 0;
	    for(j=0; j<n; j++)
	    {
	        if(arr[i] == arr[j])
	        {
	            cnt++;
	        }
	    }
	    
	    if(arr[i] == cnt && vis[arr[i]] != 1)
	    {
	      count++;  
	    }
	    vis[arr[i]] = 1;
	}
	printf("%d",count);
}
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
    int found = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i]!=0&&arr[i]!=1)
        {
            found = 1;
            break;
        }
    }
    if(found==1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}

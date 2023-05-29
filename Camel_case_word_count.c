#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int word,i;
    word=1;
    for (i=0;str[i]!=NULL;i++) 
	{
        if(str[i]>='A'&&str[i]<='Z')
		{
            word++;
        }
    }
    if(str[0]>='A'&&str[0]<='Z')
    {
    	printf("%d",word-1);
	}
	else
	{
		printf("%d",word);
	}
}

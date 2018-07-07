#include<stdio.h>
main()
{
	char s[100];
	int i,j,k,t;
	printf("Enter the string\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
	//	for(k=0;k<i-1;k++)
		//{
			for(j=0;j<i-1;j++)
			{
				if(s[j]>s[j+1])
				{
					t=s[j];
					s[j]=s[j+1];
					s[j+1]=t;
				}
			}
	//	}
	for(i=0;s[i];i++)
		printf("%c",s[i]);
}

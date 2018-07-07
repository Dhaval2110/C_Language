#include<stdio.h>
main()
{
	char s[200],l,i,j,k;
	printf("Enter the string\n");
	scanf("%s",s);

	printf("Before s=%s\n",s);

	for(i=0;s[i];i++);
	for(l=0;l<i-1;l++)
	{
		for(j=0;j<i-1;j++)
		{	if(s[j]>s[j+1])
			{
				k=s[j];
				s[j]=s[j+1];
				s[j+1]=k;
			}
		}
	}
		printf("After \n");
		for(i=0;s[i];i++)
			printf("%c",s[i]);

	
}

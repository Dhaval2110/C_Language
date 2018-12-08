#include<stdio.h>
main()
{
	char s[50],t;
	int i,j,n;

	printf("Enter string : ");
	gets(s);

	printf("Enter number : ");
	scanf("%d",&n);

	for(j=n;s[j];j=j+n)
	{
		for(i=0;s[i];i++)
		{
			if(i==j)
			{
				t = s[i];
				s[i]=s[i-1];
				s[i-1]=t;
			//	n++;
			}
		if(s[i]==' ')
		j++;
		}
	}

	printf("New string is :%s\n",s);
}

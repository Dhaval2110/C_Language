#include<stdio.h>
main()
{
	int i,j,k,t;
	char s[20];

	printf("Enter String : ");
	scanf("%[^\n]",s);
///////////////////////////////////////////////////////////////////////////////////
	for(i=0;s[i];i++);

	for(i=i-1,j=0;i>j;j++,i--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}

	printf("Now string is : %s\n",s);

	for(i=0;s[i];i++)
	{
		j=i;
		for(;s[i]>='A'&&s[i]<='z' || s[i]>='0'&&s[i]<='9';i++);
		for(k=i-1;k>j;j++,k--)
		{
			t = s[k];
			s[k] = s[j];
			s[j] = t;
		}
	}
///////////////////////////////////////////////////////////////////////////////////
	printf("Now result is : %s\n",s);
}


#include<stdio.h>
main()
{
	char s[100],i,j,k=0,t;
	printf("Entert he strong\n");
	scanf("%[^\n]",s);

	printf("Before s=%s\n",s);

	for(i=0;;i++)
	{
		if(s[i]==' ' && s[i]=='\0')
		{
			for(j=i-1;k<j;j--,k++)
			{
				t=s[j];
				s[j]=s[k];
				s[k]=t;
			}
			k=i+1;
		}
		if(s[i]=='\0')
			break;
	}
	printf("S=%s\n",s);
}

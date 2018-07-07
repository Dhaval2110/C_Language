#include<stdio.h>
main()
{
	char a[100],b[100],c[100],i,j,k;
	printf("Enetr teh strung\n");
	scanf("%[^\n]",a);
	printf("Enter the word replace\n");
	scanf("%s",b);
	printf("Enter the new word\n");
	scanf("%s",c);

	for(i=0;a[i];i++)
	{
		for(j=0;b[j]==a[j] && b[j]!='\0';)
			j++;
		i++;
	}
        printf("New string is %s\n",a);	
}


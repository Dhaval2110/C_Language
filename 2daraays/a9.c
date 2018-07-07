#include<stdio.h>
main()
{
	char s[5][10],temp[10];
	int i,j,a1,a2,a3,a4,a5;
	printf("Enter the string\n");
	for(i=0;i<5;i++)
		scanf("%s",s[i]);
//	for(i=0;i<5;i++)
//		printf("%s \n",s[i]);
/*	a1=strlen(s[0]);
	a2=strlen(s[1]);
	a3=strlen(s[2]);
	a4=strlen(s[3]);
	a5=strlen(s[4]);
*/

	for(i=0;i<10;i++)
	for(j=i+1;j<10-i;j++)
	
	if(strlen(s[i])>strlen(s[j]))
	{
	strcpy(temp,s[i]);
	strcpy(s[i],s[j]);
	strcpy(s[j],temp);
	} 

	printf("After\n");	
	for(i=0;i<5;i++)
		printf("%s \n",s[i]);
}

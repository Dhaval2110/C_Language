
#include<stdio.h>
#include<string.h>
main(){
	int i,j,n;
	char str[5][10],temp[20];
	printf("Enter the string\n");
	for(i=0;i<5;i++)
		scanf("%s",str[i]);
	printf("Before\n");
	for(i=0;i<5;i++)
		printf("%s \n",str[i]);
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++){
			if(strlen(str[i])>strlen(str[j]))
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	printf("The sorted string\n");
	for(i=0;i<5;i++)
		printf("%s \n",(str[i]));
}

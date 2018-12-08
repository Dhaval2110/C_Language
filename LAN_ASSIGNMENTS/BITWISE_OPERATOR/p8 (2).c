
//WAP to convert UPPER to LOWER and LOWER to UPPER character.

#include<stdio.h>
main()
{
	char ch,result;
	printf("Enter any character : ");
	scanf("%c",&ch);
//	result=ch^(1<<5);
//	printf("result = %c\n",result);
	if(ch>='a' && ch<='z')
	{
		printf("1\n");
		result = ch-32;
		printf("Character = %c\n",result);
	}
	else if(ch>='A' && ch<='Z')
	{
		result = ch+32;
		printf("Character = %c\n",result);
	}
}

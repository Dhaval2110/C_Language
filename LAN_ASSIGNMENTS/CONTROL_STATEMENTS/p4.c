
// WAP to convert character from upper to lower OR lower to upper.

#include<stdio.h>
main()
{
	char ch;

	printf("Enter any character : ");			// taking character from user
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')					// Converting lower case to upper case
		printf("Converted character : %c\n",ch^32);

	else if(ch>='A' && ch<='Z')
		printf("Converted character : %c\n",ch^32);	// Converting upper case to lower case

	else							
		printf("wrong Character\n");			// if character is not between a-z OR A-Z

}

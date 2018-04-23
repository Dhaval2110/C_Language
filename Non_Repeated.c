#include<stdio.h>
#include<string.h>
char returnFirstNonRepeatedChar( char * str )
{
    int i, repeated = 0,j;
    int len = strlen(str);

    for( i = 0; i < len; i++ )
    {
        repeated = 0;
        for( j = 0; j < len; j++ )
        {
            if( i != j && str[i] == str[j] ) {
                repeated = 1;
                break;
            }
        }         

        if( repeated == 0 ) {  // Found the first non-repeated character
            return str[i];
        }
    }

    return 0;
}
void main()
{
    char s[100]="geeksforgeeks",d;
    d=returnFirstNonRepeatedChar(s);
    printf("%c\n",d);
}
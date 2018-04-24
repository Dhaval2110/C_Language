#include<stdio.h>
#include<string.h>
/*
main()
{
int i;
char s[]="Dhaval Mehta is my name",a[10],b[10];

for(i=0;s[i];i++)
{
if(i%2)
a[i]=s[i];
else if(i%2==0)
b[i]=s[i];
else
printf("Done");
}
printf("%s\n%s",a,b);
}*/
/*
main()
{
int sum=0;
int n=12345,i;
for(;n/10;)
{
//int sum=0;
sum=sum+(n%10);
}
printf("%d",sum);
}*/
 

void main()

{

    long n, temp, digit, sum = 0;

 

    printf("Enter the number \n");

    scanf("%ld", &n);

    temp = n;

    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }

/*
    while (num>0 || sum>9)

    {

        digit = num % 10;

        sum  = sum + digit;

        num /= 10;

    }
*/
    printf("Given number = %ld\n", temp);

    printf("Sum of the digits %ld = %ld\n", temp, sum);

}

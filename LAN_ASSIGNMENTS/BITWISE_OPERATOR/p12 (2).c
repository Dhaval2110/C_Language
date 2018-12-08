//	 WAP to swap the adjucent bytes of given 4-digits hexadecimal numbers
//	 Ex. given number is = 0x1234
//	     after swaping   = 0x3412

#include<stdio.h>
main()
{
	int num,i,j,m,n;

	printf("Enter Hexadecimal number :");
	scanf("%x",&num);

////////////////////////////////////////////////////////////////////////////////
	for(i=0,j=8;i<8;i++,j++)
	{
		m = num>>i&1;
		n = num>>j&1;
		if (m != n)
		{
			num = num^1<<i;
			num = num^1<<j;
		}
	}
////////////////////////////////////////////////////////////////////////////////

/* Insted of for loop we can write program like below :
-------------------------------------------------------
	m = num & 0xff00;
	m = m>>8;
	n = num & 0x00ff;
	n = n<<8;
	num = m|n;
------------------------------------------------------*/

	printf("New Hexadecimal number is : %x\n",num);

}

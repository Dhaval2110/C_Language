#include<stdio.h>
              main()
	  {
		char *ptr1 = "abcdef";
		ptr1 = ptr1+(strlen(ptr1)-1);		// we can not modify constant string.
		printf("%c", --*ptr1--);
		printf("%c",--*--ptr1);
		printf("%c",--*(ptr1--));
		printf("%c",--*(--ptr1));
		printf("%c",*ptr1);
	}

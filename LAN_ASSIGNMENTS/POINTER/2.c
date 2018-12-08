#include <stdio.h>
          main()
          {
            int *ptr, a = 10;
            ptr = &a;
            *ptr += 1;
            printf("%d,%d\n", *ptr, a);
	  }

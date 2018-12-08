#include <stdio.h>
        int main()
        {
            int a[4] = {1, 2, 3, 4};
            int *p = &a[1];
            int *ptr = &a[2];
            int n = 1;
            n = ptr - p;		// here we use both void pointer and by default in GCC void pointer acts as character pointer
            printf("%d\n", n);		// so between two integer array elements..there 4 character(1 byte) space.
        }

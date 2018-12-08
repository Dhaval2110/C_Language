#include <stdio.h>
        int main()
        {
            void *p;
            int a[4] = {1, 2, 3, 4};
            p = &a[3];
            int *ptr = &a[2];
            int n = (int*)p - ptr;		// here we use integer pointer and by typecasting void pointer become integer pointer
            printf("%d\n", n);			// so between two contigious integer pointer, array element is 1.
        }

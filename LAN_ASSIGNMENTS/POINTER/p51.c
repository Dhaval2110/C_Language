#include <stdio.h>
        void f(char *k)
        {
            k++;			// pointer is on e
            k[2] = 'm';			// k[2] means l in ello.
            printf("%c\n", *k);		// *k is e
        }
        void main()
        {
            char s[] = "hello";
            f(s);
            printf("%s\n",s);		// print helmo
        }

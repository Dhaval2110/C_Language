#include <stdio.h>
        int main()
        {
            char *str = "hello, world\n";
            str[5] = '.';			// we can not modify constant string.
            printf("%s\n", str);
            return 0;
        }

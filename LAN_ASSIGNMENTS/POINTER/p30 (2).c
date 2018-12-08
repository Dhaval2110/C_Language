#include<stdio.h>
         #include<string.h>
         int main()
        {
            char *str = "hello, world\n";
            char *strc = "good morning\n";		// strcpy(destination,source);
            strcpy(strc, str);				// It will modified destination string, so it will give sagementation fault
            printf("%s\n", strc);
            return 0;
        }

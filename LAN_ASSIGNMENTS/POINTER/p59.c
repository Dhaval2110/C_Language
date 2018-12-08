#include <stdio.h>
        void foo(int *const *p);
        int main()
        {
            int i = 11;
            int *p = &i;
            foo(&p);
            printf("%d ", *p);
        }
        void foo(int *const *p)
        {
            int j = 10;
            *p = &j;			// here *p is constant and *p = &p in main function and in foo function we try to change it like *p=&j
            printf("%d ", **p);
        }

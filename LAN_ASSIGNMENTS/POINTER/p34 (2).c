#include <stdio.h>
        main()
        {
            char *str = "hello world";
            char strary[] = "hello world";
            printf("%d %d %d %d\n", sizeof(str), sizeof(strary),sizeof(main()),sizeof(void));
		return 0;
        }

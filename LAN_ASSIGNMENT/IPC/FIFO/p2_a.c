// modify above programm in such a way that sort the data according to descending order.then send 
// back the o/p to process1. 
// O/p:         vtroniiedca  
//		87421

#include"header.h"
main()
{
        int fd;
        char s[100];

        mkfifo("f1",0644);
        mkfifo("f2",0644);

        fd = open("f1",O_WRONLY);

        while(1)
        {
                gets(s);
                write(fd,s,strlen(s)+1);
        }
}


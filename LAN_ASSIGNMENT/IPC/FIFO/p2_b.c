// modify above programm in such a way that sort the data according to descending order.then send back the o/p to process1. 
//      O/p:    vtroniiedca  
//		87421

#include"header.h"
main()
{
	int fd;
	char s[100];
	char c[100],temp;
	int i[100];

	mkfifo("f1",0644);

	fd = open("f1",O_RDONLY);

	while(1)
	{
		int j,k,l;
		read(fd,s,sizeof(s));
	
		for(j=0,k=0,l=0;s[j];j++)
		{
			if(s[j]>='A' && s[j]<='z')
				c[k++] = s[j];
			if(s[j]>='0' && s[j]<='9')
				i[l++] = s[j]-48;
		}
		c[k] = i[l] = '\0';
		
		for(j=0;c[j];j++)
		{
			for(k=j+1;c[k];k++)
			{
				if(c[j] < c[k])
				{
					temp = c[j];
					c[j] = c[k];
					c[k] = temp;
				}
			}
		}
	
		for(j=0;i[j];j++)
		{
			for(k=j+1;i[k];k++)
			{
				if(i[j] < i[k])
				{
					temp = i[j];
					i[j] = i[k];
					i[k] = temp;
				}
			}
		}

		for(k=0;c[k];k++)
			printf("%c",c[k]);
		printf("\n");
		for(l=0;i[l];l++)
			printf("%d",i[l]);
		printf("\n");
	}
}	

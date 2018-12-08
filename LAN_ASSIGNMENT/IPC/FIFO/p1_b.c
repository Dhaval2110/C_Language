// 1.a)Process1 will send one string to  process2?
//   b) process2 recieve the string and store alaphetes in one array and digits(Numeric characters) in another array?
//   Ex:  i/p: vector41872india
//        o/p: vectorindia  ------->char array          
//	       41872  ---------->integer array

#include"header.h"
main()
{
	int fd;
	char s[100];
	char c[100];
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
		
		for(k=0;c[k];k++)
			printf("%c",c[k]);
		printf("\n");
		for(l=0;i[l];l++)
			printf("%d",i[l]);
		printf("\n");
	}
}	

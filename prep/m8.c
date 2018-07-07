#define SET(n,p) n=n|1<<p;\
			printf("n=%d\n",n);
#define CLR(n,p) n=n&~(1<<p);\
			printf("n=%d\n",n);
#define COM(n,p) n=n^1<<p;\
			printf("n=%d\n",n);
main()
{
int n,p;
printf("Enter the number\n");
scanf("%d",&n);
printf("Enter the position\n");
scanf("%d",&p);

SET(n,p);

CLR(n,p);

COM(n,p);
}

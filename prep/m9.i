# 1 "m9.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "m9.c"


int sum(int i,int j)
{
 return i+j;
}
# 23 "m9.c"
main()
{
 int n1,n2,n;
 printf("Enter the number\n");
 scanf("%d %d",&n1,&n2);

 {
  n=sum(n1,n2);
  printf("n=%d\n",n);
 }

# 1 "m6.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "m6.c"




main()
{
 int i=10,j=20;
 float k=22.5,l=33.5;
 printf("Before i=%d j=%d\n",i,j);
 {int temp; temp=i; i=j; j=temp;}
  printf("After i=%d j=%d\n",i,j);

 printf("Before k=%d l=%d\n",k,l);
 {float temp; temp=k; k=l; l=temp;}
  printf("After k=%d l=%d\n",k,l);
}

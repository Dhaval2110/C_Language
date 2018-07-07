#include<stdio.h>
main()
{
//int b[2][3]={10,20,30,40,50,60};

//int b[][3]={10,20,30,40,50,60};

//int b[2][3]={10,20,30,40};


int b[2][3]={{10,20},{40,50}};

int i,j,r,c;
r=sizeof(b)/sizeof(b[0]);
c=sizeof(b[0])/sizeof(b[0][0]);
//printf("%d %d\n",b[0][3],b[1][0]);
for(i=0;i<c;i++)
{
for(j=0;j<c;j++)
printf("%d ",b[i][j]);
printf("\n");

}

}

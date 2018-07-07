#include<stdio.h>
main()
{
int a[5],b[5],i,j,k,c=0,ele;
printf("Enter the eleme`nts of an array\n");
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("\n---------------------\n");

for(i=0,k=0;i<ele,k<ele;i++,k++)
{
for(j=1;j<a[i];j++)

	if(a[i]%j==0)
	c++;
	
	if(c==2)
	{
	//printf("%d ",a[i]);	
	//printf("\n");
	b[k]=a[i];
	printf("P=%d ",b[i]);
	
	}
	//printf("Prime are : \n",b[i]);	
	//k++;	}

}


printf("C =%d\n",c);
	printf("\n");
	
}

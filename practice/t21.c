#include<stdio.h>
main()
{
	int i,j,k,ele;
	int a[4];
	printf("Enter the ele\n");
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	//for(i=0;i<ele;i++)
	//printf("%d",a[i]);

	//for(i=0;i<ele;i++)
	//for(j=2;j<i;j++)

	//if(a[i]%j==0)
	//break;


	for(i=0,k=0;i<ele;i++)
			//for(j=2;j<=i;j++)

				if(a[i]%2==0)
				break;
	//	k++;	

	if(k==0)
		printf("Prime %d \n",a[i]);
	else
		printf("Not \n",a[i]);
}

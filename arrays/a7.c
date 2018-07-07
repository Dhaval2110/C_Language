#include<stdio.h>
main()
{

        int a[10],ele,i,c=0,odd,even;
        printf("enter the data\n");
        ele=sizeof(a)/sizeof(a[0]);
        for(i=0;i<ele;i++)
                scanf("%d",&a[i]);

        for(i=0;i<ele;i++)
                printf("%d ",a[i]);
	
	printf("\n");	
        for(i=0;i<ele;i++)
	if(a[i]%2)
		c=c++;
		printf("%d\n",c);

	even=ele-c;

	printf("Even=%d\n",even);
	
	odd=ele-even;
	
	printf("Odd=%d\n",odd);


}

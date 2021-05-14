//Second largest no 
// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int a[6]={0,5,9,3,1,7};
    int max1,max2,i,j;
    
    if(a[0]>a[1]){
        max1=a[0];
        max2=a[1];
    } else {
        max1=a[1];
        max2=a[0];
    }
    for(i=2;i<6;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        } else {
            max2=a[i];
        }
    }
    printf("%d %d",max1,max2);
    
}

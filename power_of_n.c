#include <stdio.h>

int main() {
 int n=64,p=2;
 while(n){
     if (n%p==1){
     break;}
      n=n/p;
 }
 
  
  if(n==1)
  {
      printf("YES");
  }
  else {
      printf("NO");
  }
}

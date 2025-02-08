#include <stdio.h>
int main() {
float n,tax;
scanf("%f",&n);
 if(n<0){
  printf("INVALID");
    } 
  else{
 if(n<=250000){
      printf("0.00"); 
  }
    else if(n<=500000){
      tax=(n-250000)*0.05;
        printf("%.2f",tax);
        
    }
      else if(n<=1000000){
          tax=250000*0.05+(n-500000)*0.2;
          printf("%.2f",tax);
      }
      else if(n>1000000){
          tax=(250000)*0.05+(500000)*0.2+(n-1000000)*0.3;
          printf("%.2f",tax);
      }
      
    }
    return 0;
}
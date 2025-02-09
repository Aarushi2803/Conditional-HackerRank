#include <stdio.h>
int main() { 
int num;
scanf("%d",&num);
 // num%6==0 instead of num%2==0 && num%3==0 
if(num%2==0 && num%3==0 && num%5 !=0){
printf("A");
}
else if(num>20 && (num == 6 || num == 10 || num  == 14 || num  == 15 || num  == 21 || num == 22 || num  == 33))   {
 printf("B");      
}
else if(((num%3==0 || num%7==0) && !(num%3==0 && num%7==0)) && (num>=10 && num<=99)){
 printf("C"); 
} 
else if(num==1 || num==4 || num==9 || num==16 || num==25 || num==36 || num==49 || num == 64 || num==81 || num==100 || num==121 || num==144 ||  num==169 || num==196 ){
  printf("D");    
}
  
else{
    printf("E");
}
    return 0;
}
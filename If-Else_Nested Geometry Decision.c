#include <stdio.h>   
int main(){ 
int n; 
scanf("%d", &n); 
if(n==0) printf("Circle\n");
else if(n==3){     
    int s1,s2,s3,d1,d2,d3;    
    scanf("%d %d %d %d %d %d" ,&s1,&s2,&s3,&d1,&d2,&d3); 
    if((d1+d2+d3 == 180) && s1>0 && s2>0 && s3>0 && d1>0 && d2>0 && d3>0 && (s1+s2>s3 && s2+s3>s1 && s3+s1>s2) ){ 
    if((s1==s2  && s1==s3) && (d1 == 60 && d2 == 60 && d3 == 60)){
      printf("Equilateral Triangle");
      return 0;
  } 
  else if((s1==s2 && d1==d2 && s2!=s3 && d2!=d3) || (s2==s3 && d2==d3 && s1!=s2 && d1!=d2 ) || (s3==s1 && d3==d1 &&          s2!=s3 && d2!=d3)) { 
      printf("Isosceles Triangle\n");
  }  
  else if((s1 !=s2) && (s1 != s3) && (s2 != s3) && (d1 != d2) && (d1 != d3) && (d2 != d3) )
      printf("Scalene Triangle\n");
  else{
      printf("Invalid Figure\n");
      return 0;
    } }     
  else{
      printf("Invalid Figure\n");
      return 0;
    }  }

// n==4
else if(n==4){ 
   int  s1, s2, s3, s4, d1, d2, d3,d4;
   scanf("%d %d %d %d %d %d %d %d" ,&s1,&s2,&s3,&s4,&d1,&d2,&d3,&d4);
   if ( (d1 + d2 + d3 + d4 == 360) && s1>0 && s2>0 && s3>0 && s4>0 && d1>0 && d2>0 && d3>0 && d4>0){  
   if (s1 == s2 && s2 == s3 && s3 == s4 && d1 == 90 && d2 == 90 && d3 == 90 && d4 == 90){
       printf("Square\n");
   }
   else if(s1==s3 && s2==s4 && d1 == 90 && d2 == 90 && d3 == 90 && d4 == 90) {
      printf("Rectangle\n");
   }
   else if(s1 == s2 && s2 == s3 && s3 == s4 && d1==d3 && d2==d4){ 
       printf("Rhombus\n");
   }  
   else if(s1==s3 && s2==s4 && d1==d3 && d2==d4) {
       printf("Parallelogram\n");
   }
      else  printf("Invalid Figure\n");
   }
       else  printf("Invalid Figure\n");
 }

 } 
#include <stdio.h>
int main(){
int age,income,risk;
scanf("%d %d %d",&age ,&income ,&risk);  
if((age<30) ||(age<=50 && age>=30 && risk==3) || (age>50 && income>75000 && risk==3)){
printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");   
}
else if((age<=50 && age>=30 && income<=75000 && risk==2) || (age<=50 && age>=30 && income>75000 && (risk==1 || risk==2) )){
printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
}
else if((age>50 || (income>75000 && risk==3)) ||(income<=30000 &&(risk==1 || risk==2))){
printf("Low Risk Portfolio: Suitable for conservative investments.\n");
}
}       
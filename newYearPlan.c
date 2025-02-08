#include <stdio.h>
int main() {
float budget, numGuest,  deco, foodCost, music, extra;
scanf("%f %f %f %f %f %f",&budget, &numGuest, &foodCost, &deco, &music, &extra); 
int food = numGuest * foodCost;
int total = food + deco + music + extra;

if((total<=budget) && (numGuest > 5 && numGuest <= 50) && (deco < 0.3 * budget || food < 0.5 * budget )&& (numGuest <=25 || music>0)){
   printf("Celebration Approved\n"); 
}   
else { 
     printf("Celebration Denied\n"); 
 }    
} 
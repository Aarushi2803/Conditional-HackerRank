#include <stdio.h>
int main() {
    int amount;
    float bill;
    scanf("%d",&amount); 
    int flag = 1;
    if (amount>=0){
     if(amount<= 100){
     bill = amount * 5;
 }
    else if(amount > 100 && amount <= 300 ){
       bill = (500 + (amount - 100) * 7);
}
    else if(amount > 300){
        bill = (500 + 1400 + (amount- 300) * 10);
    }
    }
    else{
    printf("Invalid Input!");
        flag = 0;
    } 
    if (bill<=1200 && bill>=0){
        bill = bill * 0.9;   
    }

    if(flag == 1){
    printf("The electricity bill is: %.2f.",bill);
}
}
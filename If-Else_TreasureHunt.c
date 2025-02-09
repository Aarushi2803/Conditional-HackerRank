#include <stdio.h>
int main() {
int num,num1,num2,num3,nunu,f;
    int flag = 0;
    scanf("%d",&num);
if((num>0) && (num<=3)){
   if(num==1){
       printf("Player chooses the Left path.\n");
       scanf("%d",&num1);
       if(num1==1){
           printf("Poor choice, Game Over!\n");
        }
       if(num1==2){
           printf("Player found a bridge.\n");
            scanf("%d",&nunu);
        if(nunu==1){
            printf("Player crosses the bridge safely.\n");
            flag = 1;
        } 
          if(nunu==2) {
               printf("Poor luck, Game Over!\n");
           }
       }
   }
    // second step
else if(num==2){
       printf("Player chooses the Middle path.\n");
    scanf("%d",&num2);
        if(num2==582){
            printf("Player solved the puzzle.\n");
            flag = 1;
         }
       else{
           printf("Foolish player, Game Over!\n");
       } 
}
    
 // third step
else if(num==3){
    printf("Player chooses the Right path.\n"); 
    scanf("%d",&num3);
   if(num3==30){
    printf("Player solved the puzzle.\n");
       flag = 1;
   }
     else{
        printf("Foolish player, Game Over!\n");   
    }
   }
if(flag == 1){
    scanf("%d",&f);
    if(f == 1){
        printf("All that glitters is not gold, Game Over!");
    }
     if(f == 2){
        printf("All your efforts were for nothing, Game Over!");
    }
     if(f == 3){
        printf("Congratulations!! You won the treasure.");
    }
}
} 
}
#include <stdio.h>
int main(){
int nm0,nm1,nm2,nm3,nm4,nm5,nm6,nm7,nm8,nm9;
scanf("%d %d %d %d %d %d %d %d %d %d",&nm0,&nm1,&nm2,&nm3,&nm4,&nm5,&nm6,&nm7,&nm8,&nm9);
int f1,r1,f2,r2,f3,r3;
scanf("%d %d\n %d %d\n %d %d\n",&f1,&r1,&f2,&r2,&f3,&r3); 
if(f1==0)      nm0=(nm0+r1)%10; 
else if(f1==1) nm1=(nm1+r1)%10;
else if(f1==2) nm2=(nm2+r1)%10;
else if(f1==3) nm3=(nm3+r1)%10;
else if(f1==4) nm4=(nm4+r1)%10;
else if(f1==5) nm5=(nm5+r1)%10;
else if(f1==6) nm6=(nm6+r1)%10;
else if(f1==7) nm7=(nm7+r1)%10;
else if(f1==8) nm1=(nm8+r1)%10;
else if(f1==9) nm1=(nm9+r1)%10;
    
if(f2==0)      nm0=(nm0+r2)%10;
else if(f2==1) nm1=(nm1+r2)%10;
else if(f2==2) nm2=(nm2+r2)%10;
else if(f2==3) nm3=(nm3+r2)%10;
else if(f2==4) nm4=(nm4+r2)%10;
else if(f2==5) nm5=(nm5+r2)%10;
else if(f2==6) nm6=(nm6+r2)%10;
else if(f2==7) nm7=(nm7+r2)%10;
else if(f2==8) nm8=(nm8+r2)%10;
else if(f2==9) nm9=(nm9+r2)%10;
 
if(f3==0)      nm0=(nm0+r3);
else if(f3==1) nm1=(nm1+r3)%10;
else if(f2==2) nm2=(nm2+r3)%10;
else if(f3==3) nm3=(nm3+r3)%10;
else if(f3==4) nm4=(nm4+r3)%10;
else if(f3==5) nm5=(nm5+r3)%10;
else if(f3==6) nm6=(nm6+r3)%10;
else if(f3==7) nm7=(nm7+r3)%10;
else if(f3==8) nm8=(nm8+r3)%10;
else if(f3==9) nm9=(nm9+r3)%10;
printf("%d %d %d %d %d %d %d %d %d %d" ,nm0,nm1,nm2,nm3,nm4,nm5,nm6,nm7,nm8,nm9);
}            
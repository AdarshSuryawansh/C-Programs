

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
  int No1 = 0,No2 = 0;
  
  up:
    printf("\n\n Enter Two Numbers To Find Maximum From Them =>");
    
    printf("\n\n Enter First Number : ");
    scanf("%d",&No1);
    
    printf("\n Enter Second Number : ");
    scanf("%d",&No2);
    
    if(No1 == No2)
    {
       printf("\n Both Numbers Are Equal.");
       printf("\n\n To Compare There Must Two Different Numbers.");
       
       printf("\n\n  =================== ***** ===================");
       goto up;
    }
    (No1 > No2) ? printf("\n Number %d is Maximum",No1) : printf("\n Number %d Is Maximum",No2);
    
    printf("\n\n Thanks !!!");
    
    getch();
    return 0;
    
}
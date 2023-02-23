

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

void Add()
{
  int No1=0, No2=0,Sum=0;
  
  printf("\n Enter First Number=");
  scanf("%d",& No1);
  
  printf("\n Enter Second Number=");
  scanf("%d",& No2);
  
  Sum=No1+No2;
  
  printf("\n Addition of %d and %d=%d",No1,No2,Sum);
  
  return;
}
int main()
{
  Add();
  
  printf("\n\n Thanks!!!\n");
  getch();
  return 0;
}
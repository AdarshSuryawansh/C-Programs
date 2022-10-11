

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
  int Num = 0;
  
  printf("\n Enter a Number = ");
  scanf("%d",&Num);
  
  if(Num == 0)
  {
     printf("\n Number %d is Neutral.");
  }
  else if(Num % 2 == 0)
  {
     printf("\n Number %d is Even.",Num);
  }
  else
  {
     printf("\n Number %d is Odd.",Num);
  }
  
  printf("\n\n Thanks !!!");
  
  getch();
  return 0;
}

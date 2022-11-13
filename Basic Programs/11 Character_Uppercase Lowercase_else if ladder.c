

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
  int ch = '\0';
  
  printf("\n Enter Your Character =");
  scanf("%c",&ch);
  
  if(ch >= 'A' && ch <= 'Z')
  {
     printf("\n Entered Character is Uppercase");
  }
  else if(ch >= 'a' && ch <= 'z')
  {
     printf("\n Entered Character Is Lowercase");
  }
  
  getch();
  return 0;
}

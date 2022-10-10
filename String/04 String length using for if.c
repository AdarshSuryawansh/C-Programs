

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc[50]={};
    int i=0;
    
    puts("\n Enter a String :");
    gets(cSrc);
    
    for(i=0;i<50;i++)
    {
      if(cSrc[i]=='\0')
      {
         break;
      }
    }
    printf("\n Length if Given String is=%d",i);
    
    getch();
    return 0;
}

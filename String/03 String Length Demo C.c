

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
int main()
{
     char cSrc[50] = {'\0'};
     int Len=0;
     
     puts("\n Enter a String:");
     gets(cSrc);
     
     for(Len=0;cSrc[Len]!='\0';Len++);
     
     printf("\n Length of given string is = %d",Len);
     
     getch();
     return 0;
}
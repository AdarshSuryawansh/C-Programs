

//Compiler version gcc  
#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] = {'\0'};
        int Cnt = 0, i = 0;

        printf("\n Enter a String = ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
            if(cSrc[i] == ' ')
            {
                Cnt++;
            }
            i++;
        }

        printf("\n The White space Count in Given String = %d",Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
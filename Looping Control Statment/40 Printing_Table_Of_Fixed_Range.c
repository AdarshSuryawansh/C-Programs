

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0;

        printf("\n Table Of 2 to 9 => \n");
        printf("\n===============================\n\n");

        for(r = 1; r <= 10; r++)
        {
                for(c = 2; c <= 9; c++)
                {
                        printf(" %3d ",r*c);
                }
                printf("\n");
        }

        printf("\n===============================\n");
        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
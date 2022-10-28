

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, Cnt = 0;

        printf("\n Enter Number For Count For Rows and Columns = ");
        scanf("%d",&Cnt);

        printf("\n\n Pattern is =>\n\n");

        for(r = 1; r <= Cnt; r++)
        {
                for(c = 1; c <= Cnt; c++)
                {
                        if(c == 1 || c == Cnt || r == c && r <= (Cnt + 1)/2 || r + c == Cnt + 1 && r <= (Cnt + 1)/2)
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }
                printf("\n");
        }

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}


//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
        int r = 0, c = 0, S_Num = 0, E_Num = 0;

        printf("\n Enter Starting Number For Printing Table = ");
        scanf("%d",&S_Num);

        printf("\n Enter Ending Number For Printing Table = ");
        scanf("%d",&E_Num);

        printf("\n\n ========================================\n\n");

        for(r = 1; r <= 10; r++)
        {
                if(S_Num < E_Num)
                {
                        for(c = S_Num; c <= E_Num; c++)
                        {
                                printf(" %3d ",r*c);
                        }
                        printf("\n");
                }
                else
                {
                        for(c = S_Num; c >= E_Num; c--)
                {
                        printf(" %3d ",r*c);
                }
                printf("\n");
                }
        }

        printf("\n\n ========================================\n");
        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
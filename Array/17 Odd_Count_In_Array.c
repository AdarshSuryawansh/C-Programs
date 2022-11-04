

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>

int main()
{
        int Arr[7] = {'\0'}, i = 0, O_Cnt = 0;

        printf("\n\n Enter Array Elements For Finding Odd Count.");

        for(i = 0; i < 7; i++)
        {
                printf("\n\n Enter %d Array Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        for(i = 0; i < 7; i++)
        {
                if(Arr[i] % 2 == 1)
                {
                    O_Cnt++;
                }
        }

        printf("\n\n The Count Of Odd Numbers in Given Array = %d",O_Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}


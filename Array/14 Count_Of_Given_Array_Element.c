

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
        int Arr[7] = {'\0'}, i = 0, Cnt = 0, No = 0;


        for(i = 0; i < 7; i++)
        {
                printf("\n\n Enter %d Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        printf("\n\n Enter Number For Count = ");
        scanf("%d",&No);

        for(i = 0; i < 7; i++)
        {
                if( Arr[i] == No)
                {
                    Cnt++;
                }
        }
        printf("\n\n The Count Of %d Number = %d",No,Cnt);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}


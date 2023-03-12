

//Compiler version gcc  6.3.0
/// Create, Accept, Display Array Using Loop - with macro, Find Count Of Even Elements in That Array.
#include<stdio.h>
#include<conio.h>

#define Count 10
int main()
{
        int i = 0, E_Cnt = 0;
        int Arr[Count] = {'\0'};

        printf("\n Enter Array Elements => \n");

        for(i = 0; i < Count; i++)
        {
                printf("\n Enter %d Array Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        getch();
        system("cls");

        for(i = 0; i < Count; i++)
        {
                if(Arr[i]%2 == 0)
                {
                    E_Cnt++;
                }
        }
        printf("\n Even Elements in Given Array = %d",E_Cnt);

        printf("\n\n Thanks !!!\n");
        getch();
        return 0;
}

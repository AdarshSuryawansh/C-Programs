

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 =0, Num2 = 0;

       Accept:
        printf("\n Enter Two Number To Fine Maximum From Them : ");
        scanf("%d%d",&Num1,&Num2);

        if(Num1 == Num2)
        {
            printf("\n Both Number Are Equal");
            printf("\n\n==================*****===================");

            printf("\n\n For Comparison There Should Be Two Different Number \n");
            goto Accept;
        }
        if(Num1 = Num2)
        {
            printf("\n Give First Number is Maximum",Num1);
        }
        else
        {
            printf("\n Given Second Number is Maximum",Num2);
        }
        printf("\n\n Thanks !!!");

        getch();
        return 0;
}


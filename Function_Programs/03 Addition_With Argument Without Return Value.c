

//Compiler lversion gcc  6.3.00
#include<stdio.h>
#include<conio.h>

void Add(int Num1,int Num2)
{
    int No1 = Num1, No2 = Num2, Sum = 0;
    Sum = No1 + No2;

    printf("\n Addition Of %d and %d = %d",No1,No2,Sum);

    return;
}
int main()
{
    int Num1 = 0, Num2 = 0;
    printf("\n Enter 1st Number = ");
    scanf("%d",&Num1);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&Num2);

    Add(Num1,Num2);

    printf("\n\n Thanks !!!\n");

    getch();
    return 0;
}


//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter a Number =");
    scanf("%d",&Num);

    (Num == 0)? printf("\n %d is Neutral Number.",Num): (Num > 0)? printf("\n %d is positive Number.",Num): printf("\n %d is Negative number.",Num);

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}




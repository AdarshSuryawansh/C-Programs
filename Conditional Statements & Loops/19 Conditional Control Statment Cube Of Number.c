

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    Up:
        printf("\n\n=================******=================\n");

        printf("\n Enter positive Integer Number = ");
        scanf("%d",&Num);

        if(Num <= 0)
        {
            printf("\n Invalid Number.\n\n Please Enter Another Number.");
            getch();
            goto Up;
        }
        printf("\n Cube of %d = %d",Num,Num*Num*Num);

        printf("\n\n=================******=================\n");

        printf("\n Thanks");

        getch();
        return 0;

}
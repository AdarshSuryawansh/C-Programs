

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0,N1 = 1,N2 = 0,N3 = 0;

    Up:
        printf("\n Enter a Positive Integer Number => ");
        scanf("%d",&Cnt);

        if(Cnt <= 0)
        {
            printf("\n Only positive value Required.\n");
            goto Up;
        }
        printf("\n Fibonacci Series is = ");

        while(Cnt > 0)
        {
            printf("\t %d",N3);
            N3 = N1 + N2;
            N1 = N2;
            N2 = N3;
            Cnt --;
        }
        printf("\n\n Thanks !!!!!");

        getch();
        return 0;
}
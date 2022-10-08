//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Values[5] = {0};

    for(i = 0; i < 5; i++)
    {
        printf("Enter Element No %d = ",i+1);
        scanf("%d",&Values[i]);
    }

    getch();

    printf("\n\n Element in Array are => \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("\n value of %d Element = %d",101 + i,Values[i]);
    }

    getch();
    return 0;
}

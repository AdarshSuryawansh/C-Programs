

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Product
{
        int P_ID;
        char Name[20];
        float P_Price;
        float S_Price;
};

int main()
{
        int  i = 0;
        struct Product Prod[2];

        printf("\n\n ****Accepting Product Details**** \n");

        for(i = 0; i < 2; i++)
        {
                printf("\n Enter Product ID = ");
                scanf("%d",&Prod[i].P_ID);

                fflush(stdin);

                printf("\n Enter Product Name = ");
                gets(Prod[i].Name);

                printf("\n Enter Purchase Price = ");
                scanf("%f",&Prod[i].P_Price);

                printf("\n Enter Selling Price = ");
                scanf("%f",&Prod[i].S_Price);
        }

        getch();
        system("cls");

        printf("\n\n ****Displaying Product Details**** \n");

        for(i = 0; i < 2; i++)
        {
                printf("\n\n **** Product %d Details ****\n\n ID = %d \n Name = %s \n Purchase Price = %0.2f \n Selling Price = %0.2f ",i+1,Prod[i].P_ID,Prod[i].Name,Prod[i].P_Price,Prod[i].S_Price);
        }

        printf("\n\n Thanks !!!\n");
        getch();
        return 0;
}
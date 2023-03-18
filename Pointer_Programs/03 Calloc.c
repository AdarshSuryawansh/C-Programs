

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0, iSum = 0, i = 0;
    int *iPtr = NULL;

    printf("\n Enter Number Of Bills = ");
    scanf("%d",&iCnt);

    iPtr = (int*)calloc(iCnt , sizeof(int));

    for(i = 0; i < iCnt; i++)
    {
        printf("\n Enter Bill %d = ",i+101);
        scanf("%d",&iPtr[i]);
    }

    printf("\n\n Entered Bills are => ");

    for(i = 0; i < iCnt; i++)
    {
        iSum = iSum + iPtr[i];
        printf(" %d ",iSum);
    }

    free(iPtr);

    printf("\n\n Sum Of Given Bills = %d",iSum);

    printf("\n\n Thanks !!!\n");

    getch();
    return 0;
}

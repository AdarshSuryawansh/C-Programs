#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,cnt=0;

    printf("\n Enter size to print pattern =>");
    scanf("%d",&cnt);

    for(r=1;r<=cnt;r++)
    {
        for(c=1;c<=cnt;c++)
        {
            if(r==1 || c==1 || r==cnt || c==cnt)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
                printf("\n");
    }
           getch();
           return 0;
}

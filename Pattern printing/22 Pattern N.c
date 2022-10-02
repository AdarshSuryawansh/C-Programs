#include<stdio.h>
#include<conio.h>
int main()
{
    int r=0,c=0,cnt=0;

    printf("\n Enter to print pattern=> ");
    scanf("%d",&cnt);

    for(r=1;r<=cnt;r++)
    {
        for(c=1;c<=cnt;c++)
        {
            if( c==1 || r==c || c==cnt )
            {
              printf(" * ");
            }
            else
            {
                print("  ");
            }
        }
                print("\n");
    }
    getch();
    return 0;
}

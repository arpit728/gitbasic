#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int n1,n2,temp;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("\n%d %d",n1,n2);
    while(1)
    {
        if(n1==0||n2==0)
            break;
        else
        {
            if(n1>n2)
            {
                n1=n1-n2;
            }
            else if(n2>n1)
            {
                n2=n2-n1;
            }
        }
    }
    printf("%d %d",n1,n2);
}

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=5 ; i++)
    {
        printf("\n");
        for(j=i ; j<=5 ; j++)
        {
            printf("*");
        }
    }
    return 0;
}
//Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1 ; i<=5 ; i++)
    {
        printf("\n");
        for(j=1 ; j<=5 ; j++)
        {
            printf("*");
        }
    }
    return 0;
}
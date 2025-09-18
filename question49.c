//Q49: Write a program to print the following pattern:
5
45
345
2345
12345
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5 ; i>=1 ; i--)
    {
        printf("\n");
        for(j=i ; j<=5 ; j++)
        {
            printf("%d",j);
        }
    }
    return 0;
}
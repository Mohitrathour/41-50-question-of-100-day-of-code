//Q42: Write a program to check if a number is a perfect number.
#include<stdio.h>
int main()
{
    int n,store,i,s=0;
    printf("enter the no to find the factor\n");
    scanf("%d",&n);
    store=n;
    for(i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
           s=s+n;
        }
    }
    if (store==s)
    {
        printf("its an perfect no\n");
    }
    else
    {
        printf("its not an perfect no\n");
    }
    return 0;
}
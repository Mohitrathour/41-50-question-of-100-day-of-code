//Q43: Write a program to check if a number is a strong number.
#include<stdio.h>
int main()
{
    int n,i,temp,sum=0,store,fac;
    printf("enter the no\n");
    scanf("%d",&n);
    store=n;
    while(n>0)
    {
        temp=n%10;
        fac=1;
        for(i=1 ; i<=temp ; i++)
        {
            fac=fac*i;
        }
        sum=sum+fac;
        n=n/10;
    }
    if(store==sum)
    {
        printf("its an strong no\n");
    }
    else
    {
        printf("its not an strong no\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0;
    printf("enter the no\n");
    scanf("%d",&n);
    for (i=1 ; i<=n+1; i++)
    {
        sum+=(float)(2*i - 1)/(2*i);
    }
    printf("approximate sum : %.1f \n",sum);
    return 0;
}
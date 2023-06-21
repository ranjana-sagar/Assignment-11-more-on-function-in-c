#include<stdio.h>
int sumfact();
int main()
{
    printf("Sum is %d",sumfact());
    return 0;
}
int facto(int n)
{
    int fact=1;
    for(;n;n--)
        fact*=n;
    return fact;    
}
int sumfact()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
        sum=sum+facto(i)/i;
    return sum;    
}
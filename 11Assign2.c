#include<stdio.h>
#include<conio.h>
int HCF(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,HCF(a,b));
    return 0;
}
int HCF(int a,int b)
{
    int i;
    for(i=a<b?a:b;i>=1;i--)
        if(a%i==0 && b%i==0)
           return i;          
}
#include<stdio.h>
int nfibonacci(int);
int main()
{
    int n;
    printf("How many fibonacci numbers you want to print:_");
    scanf("%d",&n);
    nfibonacci(n);
    return 0;
}
int nfibonacci(int n)
{
    int a=-1,b=1,c;
    for(;n;n--)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
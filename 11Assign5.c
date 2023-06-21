#include<stdio.h>
#include<conio.h>
int nprime(int);
int main()
{
    int n;
    printf("How many prime numbers you want to print:_");
    scanf("%d",&n);
    nprime(n);
    return 0;
}
int nprime(int n)
{
    int i,j=2;
    for(;n;)
    {
        for(i=2;i<j;i++)
            if(j%i==0)
               break;
        i==j?printf("%d ",j),n--,j++:j++;            
    }
}
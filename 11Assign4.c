#include<stdio.h>
#include<conio.h>
int nextprime(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Next prime number after the %d is %d",n,nextprime(n));
    return 0;
}
int nextprime(int n)
{
    int i;
    for(;;)
    {
        n+=1;
        for(i=2;i<n;i++)
            if(n%i==0)
               break;
        if(i==n)
            return n;       
    }
}
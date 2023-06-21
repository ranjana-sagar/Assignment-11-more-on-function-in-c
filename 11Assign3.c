#include<stdio.h>
#include<conio.h>
int isprime(int);
int main()
{
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   printf(isprime(n)==1?"prime number":"not prime");
   return 0;
}
int isprime(int n)
{
    int i;
    for(i=2;i<n/2;i++)
        if(n%i==0)
            return 0;
    return 1;        
}
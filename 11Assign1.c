#include<stdio.h>
#include<conio.h>
int LCM(int,int);
int main()
{
   int a,b,l;
   printf("Enter two number:_");
   scanf("%d%d",&a,&b);
   l=LCM(a,b);
   printf("LCM OF %d and %d is %d",a,b,l);
   return 0;
}
int LCM(int a,int b)
{
   int i=1,l;
   l=a>b?a:b;
   for(l;l<=a*b;l*=i,i++)
        if(l%a==0 && l%b==0)
           return l;
   return a*b;                       
}
#include<stdio.h>
#include<conio.h>
int primen(int ,int);
int main()
{
    int a,b;
    printf("Enter two numbers:_");
    scanf("%d%d",&a,&b);
    primen(a,b);
    return 0;
}
int primen(int a,int b)
{
    int i;
    for(a;a<b;a++)
    {
        for(i=2;i<a;i++)
            if(a%i==0)
                break;
        if(i==a)
           printf("%d ",a);
    }
}
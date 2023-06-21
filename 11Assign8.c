#include<stdio.h>
void pascal(int);
int facto(int);
int comb(int,int);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    pascal(n);
    return 0;
}
int facto(int n)
{
    int fact=1;
    for(;n;n--)
       fact*=n;
    return fact;   
}
int comb(int n,int r)
{
    return facto(n)/(facto(r)*facto(n-r));
}
void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ",comb(i,j));
        printf("\n");    
    }
    printf("\n");
}
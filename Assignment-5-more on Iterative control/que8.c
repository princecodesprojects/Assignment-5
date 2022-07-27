#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("How many time you wants to printf square of numbers");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}
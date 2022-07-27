#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("How many time you wants to printf Odd numbers");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }
    return 0;
}
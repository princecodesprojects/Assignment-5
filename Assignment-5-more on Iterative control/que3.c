#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("How many time you wants to printf natural numbers in reverse order");
    scanf("%d",&n);
    
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("How many time you wants to printf odd numbers in reverse order");
    scanf("%d",&n);
    
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",2*i-1);
    }
    return 0;
}
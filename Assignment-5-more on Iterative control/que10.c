#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Which number table you wants");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
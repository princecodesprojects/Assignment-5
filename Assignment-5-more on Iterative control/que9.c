#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("How many time you wants to printf quabes of numbers");
    scanf("%d",&n);
    
    for(int i=n;i>=1;i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}
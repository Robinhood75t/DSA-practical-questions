#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int restfact = factorial(n-1);
    return n*restfact;
}
int main()
{
    int n;
    printf("/n enter the number: ");
    scanf("%d",&n);
    printf("\n factorial = %d",factorial(n));
    return 0;
}
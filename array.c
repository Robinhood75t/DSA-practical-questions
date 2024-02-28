#include<stdio.h>
#include<conio.h>
void reverse(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void main()
{
    int n;
    printf("\n enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    getch();
}
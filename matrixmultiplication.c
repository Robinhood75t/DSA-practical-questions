#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2,n3;
    printf("\n enter row and column : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    int arr1[n1][n2];
    printf("\n enter 1st array elements: \n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[n2][n3];
    printf("\n enter 2nd array elements: \n");
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    int ans[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            ans[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\n resulting matrix: ");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    getch();
}
#include<stdio.h>
#include<string.h>
#include<conio.h>
void reverse(char c[])
{
    int s,e,n;
    n = strlen(c);
    s = 0;
    e = n-1;
    while(s<=e)
    {
        int temp = c[s];
        c[s] = c[e];
        c[e] = temp;
        s++;
        e--;
    }
    printf("\n reverse string : %s",c);
}
void main()
{
    char c[20];
    printf("\n enter phrase: ");
    gets(c);
    printf("\n original string: %s",c);
    reverse(c);
    getch();
}
#include<stdio.h>
int main()
{
    int n,i,j;
    n=5;
    i=1;
    while(i<=n)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d \t",i);
        }
        printf("\n");
        i++;
    }
}




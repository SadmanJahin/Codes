#include <stdio.h>

int main (void)

{

    int i,j,n;
    printf("Value of n: ");
    scanf("%d",&n);

    while(n<0)
    {
        printf("Enter Correct Value Of n:");
        scanf("%d",&n);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
    {
        if(i==n || j==1)
        printf("*");
        if(i!=n)
        {
        if(j>1&&j<n)
            printf(" ");
        if(j==n)
             printf("*");;
        }
    }
    printf("\n");
    }
}

#include <stdio.h>

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main(void)
{
    int i,k,j,n;
    printf("Enter Number Of Nodes: ");
    scanf("%d",&n);
    int matrix[n+1][n+1];
    printf("Enter the graph:");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
          scanf("%d",&matrix[i][j]);

       for(k=1;k<=n;k++)
            for(i=1;i<=n;i++)
              for(j=1;j<=n;j++)
       {
           matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
       }


    //print the graph
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          printf("%d",matrix[i][j]);
        }
        printf("\n");
    }

 }

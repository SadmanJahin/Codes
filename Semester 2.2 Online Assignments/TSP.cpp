#include <iostream>
#include <climits>
#include <iomanip>
#include <stdio.h>

#define N 5

void reduceMatrix(int adjMatrix[N][N])
{
     int i,j,k;
     int min,tMin=0;
        for(i=0;i<N;i++)
        {
            min=adjMatrix[i][0];
            for(j=0;j<N;j++)
        {
            if(min>adjMatrix[i][j])
            min=adjMatrix[i][j];
        }
        for(k=0;k<N;k++)
        {
          adjMatrix[i][k]-=min;

        }
        tMin+=min;
}

 for(i=0;i<N;i++)
        {
            min=adjMatrix[0][i];
            for(j=0;j<N;j++)
        {
            if(min>adjMatrix[j][i])
            min=adjMatrix[j][i];
        }
        for(k=0;k<N;k++)
        {
          adjMatrix[k][i]-=min;

        }
        tMin+=min;

}



for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
{
    if(adjMatrix[i][j]>100)
        printf("INF ");
    else
    printf("%d ",adjMatrix[i][j]);
}
printf("\n");
}

printf("\n%d",tMin);
}



int main(void)
{

    int adjMatrix[N][N] =
    {
        {       INT_MAX, 20,  30, 10,11 },
        {       15,      INT_MAX,       16, 4, 2 },
        { 3, 5,  INT_MAX,    2 , 4},
        { 19, 6, 18, INT_MAX, 3 },
        { 16, 4, 7, 16, INT_MAX }
        };

       reduceMatrix(adjMatrix);
}

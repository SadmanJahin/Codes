#include<bits/stdc++.h>
#include<stdlib.h>
#define n 5
//int n=5;
int s[n][n];
void print_optimal(int i,int j)
{
    if (i == j)
        printf(" A%d ",i);
    else
    {
        printf(" ( ");
        print_optimal(i, s[i][j]);
        print_optimal(s[i][j] + 1, j);
        printf(" ) ");
    }
}

int main (void)
{

    int p[]= {5,4,6,2,7};
    int m[n][n];

    memset(m,0,sizeof m);
    memset(s,0,sizeof s);


    int i,j,min,q,d,k;
    for(d=1; d<n-1; d++)
    {

        for(i=1; i<n-d; i++)
        {
            j=i+d;
            min=INT_MAX;
            for(k=i ; k<=j-1; k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<min)
                {
                    min=q;
                    s[i][j]=k;
                }
            }
            m[i][j]=min;

        }

    }
    //printf("%d",m[1][n-1]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }
print_optimal(1,4);

}

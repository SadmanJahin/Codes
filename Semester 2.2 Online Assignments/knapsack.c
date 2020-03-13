#include <stdio.h>

int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int main(void)
{
    int max_weight,itemNo;
    printf("Enter Item No and Maximum Capacity: ");
    scanf("%d %d",&itemNo,&max_weight);
    int value[]={-10,1,2,5,6};
    int weight[]={-10,2,3,4,5};
    int table[itemNo+1][max_weight+1];
    memset(table, 0, sizeof table);
    int i,j;
    for(i=1;i<itemNo+1;i++)
    {
        for(j=1;j<max_weight+1;j++)
        {
            if(j-weight[i]>=0)
            table[i][j]=max(table[i-1][j],table[i-1][j-weight[i]]+value[i]);
            else
            table[i][j]=table[i-1][j];
        }
    }
    for(i=0;i<itemNo+1;i++)
    {
        for(j=0;j<max_weight+1;j++)
           {
             printf("%d ",table[i][j]);
           }
           printf("\n");
    }


    int res = table[itemNo][max_weight];
    printf("%d\nItems Selected are :", res);
      int n=itemNo;
    int w = max_weight;
    for (i = n; i > 0 && res > 0; i--) {
           if (res == table[i - 1][w])
            continue;
        else {


            printf("%d ", weight[i]);
            res = res - value[i];
            w = w - weight[i];
        }
    }

    printf("\n");

}

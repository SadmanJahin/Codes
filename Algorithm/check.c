#include <stdio.h>


int main (void)

{
int array[5]={1,2,3,4,5};

int i,j,x,t,temp;

for(i=4;i>=1;i--)
{
    t=0;
    for(j=1;j<=i;j++)
    {
        if(array[t]>array[j])
            t=j;
    }
    temp=array[i];
    array[i]=array[t];
    array[t]=temp;

    for(x=0;x<5;x++)
    {
        printf("%d",array[x]);
    }
    printf("\n");
}

    for(i=0;i<5;i++)
    {
        printf("%d",array[i]);
    }
}




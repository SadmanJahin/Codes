#include <stdio.h>

hanoi(int n,int i,int j, int k)

{
    if(n==1)
    {
        printf("Moved one disk from pole %d to %d\n",i,k);
        return;
    }
    else
    {
        hanoi(n-1,i,k,j);
        printf("Moved one disk from pole %d to %d\n",i,k);
        hanoi(n-1,j,i,k);
    }
}

int main (void)
{
   int n;
printf("Enter Number Of disks: ");
scanf("%d",&n);
hanoi(n,1,2,3);
    return 0;
}

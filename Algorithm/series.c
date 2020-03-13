#include <stdio.h>

int main(void)

{

     int i,j,n,sum=0;
    printf("Enter Positive Integer :");
    scanf("%d",&n);

    if(n<0)
        return;

    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=i;j++)
    {
        printf("%d",j);
        sum=sum+j;
    }
   cout<<"The Sum is ";
   cout <<sum;
    }
return 0;
}

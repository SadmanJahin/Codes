#include <stdio.h>

int disk[100];
int source[100];
int help[100];
int destination[100];

int top=-1;

void push(int n,int s,int h,int d)
{
    top++;
    disk[top]=n;
    source[top]=s;
    help[top]=h;
    destination[top]=d;


}
int*  pop()
{
   static int array[4];
    array[0]=disk[top];
    array[1]=source[top];
    array[2]=help[top];
    array[3]=destination[top];
    top--;
    return array;
}
void hanoi(int N,int I,int J,int K)
{
    int i,n,s,h,d;
    int* ar ;

    push(N,I,J,K);

   while(top!=-1)
   {
      ar = pop();
       n=ar[0],s=ar[1],h=ar[2],d=ar[3];

       if(n==1)
        printf("Move from %d to %d\n",s,d);
       else
       {
        push(n-1,h,s,d);
       push(1,s,h,d);
       push(n-1,s,d,h);
       }

   }
}
int main (void)

{
    int n;
printf("Enter Number Of disks: ");
scanf("%d",&n);
hanoi(n,1,2,3);
}

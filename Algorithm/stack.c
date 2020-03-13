#include <stdio.h>
#define stackSize 3
int* stack[stackSize]= { NULL };

int top=-1;



void push(int item)
{
 top++;
 if(top>stackSize-1)
 {
     printf("Stack is Full");
     return;
 }

 stack[top]=item;
}
int pop()
{
    if(top==-1)
    {
    printf("Stack is empty\n");
    return -1;
    }

    else
    return stack[top--];


}

int pick(int index)
{
    if( stack[index] != NULL && top>=index)
    return stack[index];
    else
    {
        printf("\nNo value at %d index. \n",index);
        return -1;
    }
}
int main (void)
{
int n,item,index;
for(;;)
{
printf("\n\nEnter the Operation to proceed: 1.Push 2. Pop  3.Pick\n");
scanf("%d",&n);
if(n==1)
{
 printf("\nEnter The Data For Push : ");
 scanf("%d",&item);
  push(item);
  printf("\n");
}
if(n==2)
    {
        printf("Popped Value : ");
        printf(" %d ",pop());
    }

if(n==3)
    {
    printf("Enter index for pick : ");
    scanf("%d",&index);
    printf("\nPicked Value:  %d ",pick(index));
    }
}
    return 0;
}

#include <stdio.h>
#define qsize 4


void enqueue (int *data,int *head,int *tail,int item)
{

 if (((*tail)+1)%(qsize+1)== (*head))
    printf("Queue is Full\n");

/* else  if ( (*tail) >0 && (*head) > qsize-1)

    (*head)=0;*/

  else
  {
    data[*tail]=item;
    (*tail)=((*tail)+1)%(qsize+1);
  }
}

int dequeue (int *data,int *head,int *tail)
{
   int item;
/*if( (*head) >0 && (*tail) > qsize-1)
    (*tail)=0;
*/

    if( (*tail) == (*head))
    {
    printf("\nQueue is empty\n");
    return -1;
    }

    item = data[(*head)];
    (*head)=((*head)+1)%(qsize+1);

    return item;

}

int main (void)

{
int data[qsize+1];
int head=0,tail=0;
int n,item;
for(;;)
{
printf("\n\nEnter the Operation to proceed: 1.Enqueue 2. Dequeue\n");
scanf("%d",&n);
if(n==1)
{
 printf("Enter The Data For Enqueue : ");
 scanf("%d",&item);
enqueue(data,&head,&tail,item);
}
if(n==2)
{
printf("Dequeued Value : ");
int x=dequeue (&data,&head,&tail);
printf("%d",x);
}
}
return 0;
}


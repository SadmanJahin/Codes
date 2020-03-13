#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;
struct Node* tail;


void enqueue(int data)
{

    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));


    if (!newNode) {
        printf("\nHeap Overflow");
        exit(1);
    }


    newNode->data = data;


    newNode->next = tail;


    tail = newNode;
}


int isEmpty()
{
    return tail == NULL;
}


int peek()
{

    if (!isEmpty(tail))
        return tail->data;
    else
        exit(EXIT_FAILURE);
}



int dequeue()
{
    struct Node* newNode=tail;
if(newNode->next==NULL)
   {
       int item=newNode->data;
       free(newNode);
       tail=head=NULL;
       return item;
   }
   else{
    while(newNode->next->next !=NULL)
        newNode=newNode->next;
    head=newNode;

    int item=head->next->data;
    free(head->next);
    head->next=NULL;

 return item;
   }

}

void display()
{
    struct Node* temp;


    if (tail == NULL) {
        printf("\nQueue Underflow");
        exit(1);
    }
    else {
        temp = tail;
        while (temp != NULL) {


            printf("%d ", temp->data);


            temp = temp->next;
        }
    }
}



int main(void)
{

    enqueue(11);
    enqueue(22);
    enqueue(33);
    enqueue(44);


    display();


    printf("\nTop element is %d\n", peek());


   printf("Dequeued Value %d ",dequeue());
   printf("%d ",dequeue());
   printf("%d ",dequeue());
   printf("%d\n",dequeue());



    display();


    printf("\nTop element is %d\n", peek());

    return 0;
}


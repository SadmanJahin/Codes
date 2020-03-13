#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct Node {
    int data;
    struct Node* next;
};
struct Node* top;


void push(int data)
{

    struct Node* newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));


    if (!newNode) {
        printf("\nHeap Overflow");
        exit(1);
    }


    newNode->data = data;


    newNode->next = top;


    top = newNode;
}


int isEmpty()
{
    return top == NULL;
}


int peek()
{

    if (!isEmpty(top))
        return top->data;
    else
        exit(EXIT_FAILURE);
}



void pop()
{
    struct Node* newNode;


    if (top == NULL) {
        printf("\nStack Underflow");
        exit(1);
    }
    else {

        newNode = top;


        top = top->next;


        newNode->next = NULL;


        free(newNode);
    }
}

void display()
{
    struct Node* temp;


    if (top == NULL) {
        printf("\nStack Underflow");
        exit(1);
    }
    else {
        temp = top;
        while (temp != NULL) {


            printf("%d ", temp->data);


            temp = temp->next;
        }
    }
}



int main(void)
{

    push(11);
    push(22);
    push(33);
    push(44);


    display();


    printf("\nTop element is %d\n", peek());


    pop();
    pop();


    display();


    printf("\nTop element is %d\n", peek());
    return 0;
}

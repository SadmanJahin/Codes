#include <stdio.h>
typedef struct node Node;

struct node {
int data;
Node *next;
};



Node* CreateNode(int item, Node *next)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data=item;
    newNode->next=next;

    return newNode;
}

Node* append(Node *head,int item)
{
    Node *current_Node=head;
    while(current_Node->next!=head)
    {
        current_Node=current_Node->next;
    }


    Node *newNode= CreateNode(item,head);
    current_Node->next=newNode;

  return current_Node->next;
}
void check_IsCircular(Node *n)
{
    int flag=0;
     Node *check=n;
    while(check != n)
    {
        if(check == NULL)
        {
         break;
         flag=1;
        }
        check = check->next;
    }
    if(flag==1)
        printf("Not Circular");
    else
        printf("Circular");
}
int main()
{

    Node *n;
    n=CreateNode(5,NULL);
    n->next=n;
    append(n,4);
    append(n,3);
    Node *check=n;

while(check->next!= n)
{
    printf("%d\n",check->data);
    check=check->next;
}
printf("%d",check->data);
check_IsCircular(n);
}

#include <stdio.h>
typedef struct node Node;

struct node {
int data;
Node *next;
Node *prev;
};

Node* CreateNode(Node *prev ,int item, Node *next)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data=item;
    newNode->next=next;
    newNode->prev=prev;

    return newNode;
}
Node* append(Node *head,int item)
{
    Node *current_Node=head;
    while(current_Node->next!=NULL)
    {
        current_Node=current_Node->next;
    }


    Node *newNode= CreateNode(current_Node,item,NULL);
    current_Node->next=newNode;

  return current_Node->next;
}
Node* insert(Node *head,int item,int key)
{
    Node *current_Node=head;

    while(current_Node !=NULL)
    {

        if(current_Node->data == key)
        {

            break;

        }
        current_Node=current_Node->next;
    }
     Node *newNode= CreateNode(NULL,item,NULL);
    newNode->next=current_Node;
    newNode->prev=current_Node->prev;
     current_Node->prev->next=newNode;
    current_Node->prev=newNode;
    return newNode;

}
Node* Delete_node(Node *head,int key)
{
    Node *current_Node=head;

    while(current_Node !=NULL)
    {

        if(current_Node->data == key)
        {

            break;

        }
        current_Node=current_Node->next;
    }
    current_Node->prev->next=current_Node->next;
    current_Node->next->prev=current_Node->prev;
    free(current_Node);
}
int main (void)

{
    Node *n,*l;
    n=CreateNode(NULL,5,NULL);
    append(n,8);
    append(n,10);
    insert(n,9,10);
      l=append(n,4);
Delete_node(n,10);
    Node *check=n;

while(check!=NULL)
{
    printf("%d\n",check->data);
    check=check->next;
}

}

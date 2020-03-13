#include <stdio.h>
typedef struct node Node;
struct node
{
  int data;
  Node* next;
};

Node* CreateNode(int item,Node* next)
{
     Node *new_node = (Node *) malloc(sizeof(Node));
     new_node->data=item;
     new_node->next=next;
     return new_node;
}

Node* Add(Node* node,int item)
{
    node->next=CreateNode(item,NULL);
    return node->next;
}

Node *Delete_node(Node *head,Node *node)
{
    if(node==head)
    {
        head=node->next;
        free(node);
        return head;
    }
    Node *currentNode = head;

    while(currentNode!=NULL)
    {
        if(currentNode->next == node)
        {
          currentNode->next=node->next;
          free(node);

        }

        currentNode=currentNode->next;
    }
}
Node *Search_node (Node *head,int item)
{
    Node *currentNode= head;
    while(currentNode != NULL)
    {
        if(currentNode->data==item)
        return currentNode;

        currentNode=currentNode->next;
    }
}

int main (void)
{

Node *n=CreateNode(10,NULL);
Node *x=Add(n,6);
Node *y=Add(x,3);

n=Delete_node(n,Search_node(n,10));
Node *check=n;
while(check!=NULL)
{
    printf("%d\n",check->data);
    check=check->next;
}


}

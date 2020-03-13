#include <stdio.h>
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};


Node *Create_node(int item,Node *next)
{
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node==NULL)
    {
        printf("ERROR! Could Not Create a new Node");
        exit(1);
    }
    new_node->data=item;;
    new_node->next=next;

 return new_node;
}


Node *prepend (Node *head,int item)
{
    Node *new_node = Create_node(item,head);

    return new_node;
}


Node *append(Node *head,int item)
{
    Node *new_node=Create_node(item,NULL);
    {
        if(head == NULL)
        return new_node;
    }
    Node *current_node = head;
    while (current_node->next !=NULL)
    {
        current_node= current_node->next;
    }
    current_node->next = new_node;

    return head;
}



void insert(Node *node,int item)
{
 Node *new_node= Create_node(item, node->next);
  node->next=new_node;

}



Node *Delete_node(Node *head,Node *node)
{
    if(node == head)
    {
        head=node->next;
        free(node);
        return head;
    }
    Node *current_node=head;
    while(current_node!=NULL)
    {
        if(current_node->next == node)
        {
            break;
        }
        current_node=current_node->next;
    }
    if(current_node==NULL)
        return head;

    current_node->next=node->next;
    free(node);
    return head;
}
Node *Search_node(Node *head,int value)
{
    Node *current_node=head;
    while(current_node !=NULL)
    {
     if(current_node->data == value)
     {
         return current_node;

     }
       current_node = current_node->next;
    }
}

void print_linked_list(Node *head)
{
    Node *current_node=head;
    while(current_node !=NULL)
    {
        printf("%d",current_node->data);
        current_node = current_node->next;
         printf("\n");
    }

}

int main (void)

{
   Node *n;
   n= Create_node(5,NULL);
   append(n,10);
   append(n,20);
   append(n,30);
   Node* x;
  x=prepend(n,0);
  Delete_node(x,Search_node(x,5));
  insert(Search_node(x,20),28);
  print_linked_list(x);

}

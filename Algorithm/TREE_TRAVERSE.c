#include <stdio.h>
typedef struct node Node;
struct node
{
    int data;
    Node *right;
    Node *left;
};
Node* Create_node(int item)
{
   Node *new_node = (Node *) malloc(sizeof(Node));
   new_node->data=item;
   new_node->right=NULL;
    new_node->left=NULL;

    return new_node;
}
void add_LeftChild(Node *node,Node* child)
{
node->left=child;
}
void add_RightChild(Node *node,Node* child)
{
node->right=child;
}

Node *Create_Tree()
{
    Node *two=Create_node(2);
    Node *seven=Create_node(7);
    Node *nine=Create_node(9);
   add_LeftChild(two,seven);
   add_RightChild(two,nine);
    Node *one=Create_node(1);
    Node *six=Create_node(6);
    add_LeftChild(seven,one);
     add_RightChild(nine,six);

     return two;
}
void pre_order(Node *node)
{
    printf("%d ",node->data);
    if(node->left!=NULL)
        pre_order(node->left);

    if(node->right!=NULL)
        pre_order(node->right);

}

void post_order(Node *node)
{

    if(node->left!=NULL)
        post_order(node->left);

    if(node->right!=NULL)
        post_order(node->right);

        printf("%d ",node->data);
}

void in_order(Node *node)
{

    if(node->left!=NULL)
        in_order(node->left);

      printf("%d ",node->data);

    if(node->right!=NULL)
        in_order(node->right);


}


void print_info(Node *n)
{
    while(n!=NULL)
 {
printf("%d",n->data);
  n=n->right ;

 }
}

int main ()
{
    Node *n=Create_Tree();
    pre_order(n);
    printf("\n");
    post_order(n);
     printf("\n");
     in_order(n);

    return 0;
}

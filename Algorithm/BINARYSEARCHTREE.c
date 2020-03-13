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
    Node *three=Create_node(3);
    Node *seven=Create_node(7);
    Node *nine=Create_node(9);
     Node *one=Create_node(1);
    Node *eight=Create_node(8);
   add_LeftChild(seven,two);
   add_LeftChild(two,one);
add_RightChild(two,three);
    add_RightChild(seven,eight);
     add_RightChild(eight,nine);

     return seven;
}
Node *SearchNode(Node *root,int item)
{
    while(root!=NULL)
    {
    if(root->data==item)
        return root;
    if(item > root->data)
    {
        Node *currentNode=root;
        while(currentNode!=NULL)
        {
            if(currentNode->data==item)
                return currentNode;
            if(item < currentNode->data)
            {
                root=currentNode;
                break;

            }
            currentNode = currentNode->right;
          root=currentNode;
           if(root==NULL)
             return NULL;

      }
    }
     if(item < root->data)
    {
         Node *currentNode=root;
       while(currentNode!=NULL)
        {
            if(currentNode->data==item)
                return currentNode;
            if(item > currentNode->data)
            {

            root=currentNode;
            break;
            }
            currentNode = currentNode->left;
            root=currentNode;
           if(root==NULL)
             return NULL;

        }
    }

    }

}

Node *insertBST(Node *root,Node *node)
{
    Node *parentNode,*currentNode;
    if(root==NULL)
    {
        root=node;
        return root;
    }
    parentNode=NULL;
    currentNode=root;
    while(currentNode!=NULL)
    {
        parentNode=currentNode;
        if(node->data < currentNode->data)
        currentNode=currentNode->left;
        else
            currentNode=currentNode->right;
    }
    if( node->data < parentNode->data)
    add_LeftChild(parentNode,node);
        else
    add_RightChild(parentNode,node);

    return root;

}
int i,array[30];
void in_order(Node *node)
{

    if(node->left!=NULL)
        in_order(node->left);

     array[i]=node->data;
     i++;

    if(node->right!=NULL)
        in_order(node->right);


}
int check_BST(Node *node)
{
    in_order(node);
    int i=0;
    for(i=0;i<7;i++)
    {
        if(array[i]>array[i+1])
           return 0;
    }
    return 1;
}

void print_info(Node *n)
{
    while(n!=NULL)
 {
printf("%d",n->data);
  n=n->left ;

 }
}


int main (void)

{

 Node *n=Create_Tree();
 Node *p=Create_node(6);
 Node *y=Create_node(4);
 insertBST(n,p);
 insertBST(n,y);
Node *res=SearchNode(n,6);
if(res==NULL)
    printf("Not Found");
else printf("%d Found",res->data);
printf("%d",check_BST(n));

}

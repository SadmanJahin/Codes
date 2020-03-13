#include<stdio.h>
#define qsize 104

int data[qsize+1];
int head=0,tail=0;
int distance[40];
int parent[40];
void enqueue (int item)
{

 if (((tail)+1)%(qsize+1)== (head))
    printf("Queue is Full\n");


  else
  {
    data[tail]=item;
    (tail)=((tail)+1)%(qsize+1);
  }
}

int dequeue ()
{
   int item;


    if( (tail) == (head))
    {
    printf("\nQueue is empty\n");
    return -1;
    }

    item = data[(head)];
    head=(head+1)%(qsize+1);

    return item;

}

printData(int nodeStart,int nodeDes)
{
    printf("\nShortest Path %d to %d is :",nodeStart,nodeDes);
   int i=nodeDes;
    printf("%d ",i);
    while(parent[i]!=-1)
    {
        int value=parent[i];
        printf("%d ",value);
        i=value;
    }
    printf("\nWith distance %d",distance[nodeDes]);
}

int main (void)

{
    int i,j;
int vertex,edges;
printf("Enter The Number of Vertices and Egdes: ");
scanf("%d %d",&vertex,&edges);
int graph[vertex][vertex];
for(i=0;i<vertex;i++)
    for(j=0;j<vertex;j++)
        graph[i][j]=0;

    printf("\nEnter Graph Connections: ");
    for(i=0;i<edges;i++)
    {
        int node1,node2;
        scanf("%d %d",&node1,&node2);
        graph[node1][node2]=1;
       // graph[node2][node1]=1;
    }
    for(i=0;i<vertex;i++)
      {
      for(j=0;j<vertex;j++)
      {
       printf("%d ",graph[i][j]);
      }
      printf("\n");
      }
      int nodeS,nodeD;
    printf("\nEnter the Starting Node: ");
    scanf("%d",&nodeS);
     printf("\nEnter the Destination: ");
    scanf("%d",&nodeD);
    enqueue(nodeS);

    for(i=0;i<5;i++)
        parent[i]=-1;
    for(i=0;i<5;i++)
        distance[i]=0;

    while(head!=tail)
    {
       int x=dequeue();
      for(i=0;i<vertex;i++)
      {

      if(graph[x][i] == 1 )
      {
        parent[i]=x;
        distance[i]=distance[x]+1;
        enqueue(i);

      }

      }
    }
printData(nodeS,nodeD);
}

#include <stdio.h>
#define qsize 104
int vertex,edges;
int Queue[10],top=0;

void enqueue (int item)
{

 Queue[top]=item;
 top++;
}


int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i+1;
}
int parent(int i)
{
    return i/2;
}

void min_heapify(int heap[],int heap_size,int i)
{
    int l,r,largest,t;
    l=left(i);
    r=right(i);

    if(l<=heap_size && heap[l]<heap[i])
        largest=l;
    else
        largest=i;
    if(r<=heap_size && heap[r]<heap[largest])
        largest=r;

    if(largest != i)
    {
        t=heap[i];
        heap[i]=heap[largest];
        heap[largest]=t;
        min_heapify(heap,heap_size,largest);
    }
}
void build_minheap(int heap[],int heap_size)
{
    int i;
    for( i=heap_size/2 ; i>=1 ; i--)
    {
        min_heapify(heap,heap_size,i);
    }
}
int extract_min(int heap[],int heap_size)
{
    int i,maxitem;
    maxitem=heap[1];

    heap[1]=heap[heap_size];
    heap_size--;
    min_heapify(heap,heap_size,1);

    return maxitem;
}
void primAlgorithm(int graph[][vertex],int node1,int node2,int weight)
{
    int i,j,k;
    graph[node1][node2]=999;
   for(i=0;i<edges;i++)
   {
       int j=0,k=0;
       for(j=0;j<vertex;j++)
       {
        if(graph[node2][j]<900)
       {
           printf("Enqued %d",graph[node2][j]);
           enqueue(graph[node2][j]);
       }
       }
        printf("\n");
       int min=extract_min(Queue,edges);
       //if(min==999)
        //continue;
      for(j=0;j<vertex;j++)
        for(k=0;k<vertex;k++)
      {
          if(graph[j][k]==min)
          {
               node2=k;
             //  printf("%d %d %d\n",j,k,graph[j][k]);
             graph[j][k]=999;
            break;
          }
      }
   }
}

int main (void)
{
    int i,j,lowest=100,temp1,temp2;

printf("Enter The Number of Vertices and Egdes: ");
scanf("%d %d",&vertex,&edges);
int graph[vertex][vertex];
for(i=0;i<vertex;i++)
    for(j=0;j<vertex;j++)
        graph[i][j]=999;
    printf("\nEnter Graph Connections & Weight: ");
    for(i=0; i<edges; i++)
    {
        int node1,node2,weight;
        scanf("%d %d %d",&node1,&node2,&weight);
        graph[node1][node2]=weight;
        if(lowest>weight)
        {
            lowest=weight;
            temp1=node1;
            temp2=node2;
        }

    }

   //printf("%d %d %d",temp1,temp2,lowest);
   printf("\n\n");

   for(i=0;i<10;i++)
    Queue[i]=999;
   primAlgorithm(graph,temp1,temp2,lowest);
}

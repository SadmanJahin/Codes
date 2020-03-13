#include <stdio.h>
int vertex,edges;
int connectedSet[50],set=0;
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

void max_heapify(int heap[],int heap_size,int i)
{
    int l,r,largest,t;
    l=left(i);
    r=right(i);

    if(l<=heap_size && heap[l]>heap[i])
        largest=l;
    else
        largest=i;
    if(r<=heap_size && heap[r]>heap[largest])
        largest=r;

    if(largest != i)
    {
        t=heap[i];
        heap[i]=heap[largest];
        heap[largest]=t;
        max_heapify(heap,heap_size,largest);
    }
}
void build_maxheap(int heap[],int heap_size)
{
    int i;
    for( i=heap_size/2 ; i>=1 ; i--)
    {
        max_heapify(heap,heap_size,i);
    }
}
void heap_sort(int heap[],int heap_size)
{
    int i,t;
    for(i=heap_size;i>1;i--)
    {
       t=heap[1] ;
       heap[1]=heap[i];
       heap[i]=t;

       heap_size -= 1;
       max_heapify(heap,heap_size,1);
    }
}

int isSafe(int node1,int node2)
{
    int i,flag1=0,flag2=0;
    for(i=0;i<vertex;i++)
    {
        if(connectedSet[i]==node1)
            flag1=1;
        if(connectedSet[i]==node2)
            flag2=1;
    }
    if(flag1&&flag2)
        return 0;
    else
    {
        if(flag1==0)
        {
          connectedSet[set]=node1;
          set++;
        }
        if(flag2==0)
        {
          connectedSet[set]=node2;
          set++;
        }
        return 1;

    }
}

void krushkal(int graph[][vertex],int array[])
{
     int i,j,k,flag=0;
     for(i=1;i<edges+1;i++)
     {
         j=0,k=0,flag=0;
         for(j=0;j<vertex;j++)
         {
            for(k=0;k<vertex;k++)
         {
                if(array[i]==graph[j][k])
                {
                //printf("\nFound at %d %d",j,k);
                flag=1;
                break;
                }
         }
           if(flag)
                    break;
         }
         if(isSafe(j,k))
         {
            printf("\n->Nodes :%d %d Weight: %d",j,k,graph[j][k]);
            graph[j][k]=-1;
         }
        /* int x;
         printf("\n");
         for(x=0;x<vertex;x++)
            printf("%d ",connectedSet[x]);
            printf("\n");*/
     }
}

int main(void)
{
    int i,j;

  printf("Enter The Number of Vertices and Egdes: ");
scanf("%d %d",&vertex,&edges);
int graph[vertex][vertex];
for(i=0;i<vertex;i++)
    for(j=0;j<vertex;j++)
        graph[i][j]=0;

int array[edges+1],k=1;
 memset(array, 0, sizeof array);
  memset(connectedSet, -1, sizeof connectedSet);


    printf("\nEnter Graph Connections & Weight: ");
    for(i=0;i<edges;i++)
    {
        int node1,node2,weight;
        scanf("%d %d %d",&node1,&node2,&weight);
        graph[node1][node2]=weight;

        array[k]=weight;
            k++;

    }
    printf("\nAdjacency Lists are:\n");
    for(i=0;i<vertex;i++)
      {
      for(j=0;j<vertex;j++)
      {
       printf("%d ",graph[i][j]);
      }
      printf("\n");
      }
       build_maxheap(array,edges+1);
    heap_sort(array,edges+1);
      //for(i=1;i<edges+1;i++)
      //printf("%d",array[i]);
       printf("\nMinimum Spanning Tree Connections are:\n");
      krushkal(graph,array);
}

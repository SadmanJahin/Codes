#include<stdio.h>
#define qsize 104

int data[qsize+1];
int head=0,tail=0;


int graph[50][50];
int color[50],discover[50],finish[50],parent[50];
int nodes, edges,source,ttime=0;
int white=1,gray=2,black=3;
int arr[50];

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
void DFSvisit(int u){
    int i;
    ttime=ttime+1;
    discover[u]=ttime;
    color[u]=gray;
    int v;
    for(i=0;i<nodes;i++){
        if(graph[u][i]==1){
            v=i;
            if(color[v]==white){
                parent[v]=u;
                DFSvisit(v);
            }
        }
    }
    color[u]=black;
    ttime=ttime+1;
    finish[u]=ttime;
}
void graphDFS(int nodes){
    int i;
    for( i=0;i<nodes;i++){
        color[i]=white;
        parent[i]=-1;
    }
    for(i=0;i<nodes;i++){
        if(color[i]==white){
            DFSvisit(i);
        }
    }
}

int main(){
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
        graph[node2][node1]=1;
    }
    for(i=0;i<vertex;i++)
      {
      for(j=0;j<vertex;j++)
      {
       printf("%d ",graph[i][j]);
      }
      printf("\n");
      }
      int nodes=vertex;
    graphDFS(nodes);
    for(i = 0; i <nodes; i++){
		printf("%d %d \n",discover[i],finish[i]);
	}
return 0;
}

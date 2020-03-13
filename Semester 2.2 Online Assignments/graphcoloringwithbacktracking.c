#include <stdio.h>

int colorNumber=2;
int color[100]={0};
int vertex,edges;

int graph_color(int graph[][vertex],int k)
{
   int c;

    for(c=1;c<=colorNumber;c++)
    {
        if(is_Safe(graph,k,c))
            color[k]=c;
        if(k+1<vertex)
            graph_color(graph,k+1);
        else
            return;
    }
}
int is_Safe(int graph[][vertex],int k,int c)
{
    int i;
    for(i=0;i<vertex;i++)
    {
    if(graph[k][i]==1 && color[i]==c)
    {
        printf("dhukse");
        return 0;
    }
    }
    printf("+");
    return 1;
}

int main (void)

{
      int i,j;

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
      graph_color(graph,0);

      printf("%d",color[0]);
       printf("%d",color[1]);
       printf("%d",color[2]);

}

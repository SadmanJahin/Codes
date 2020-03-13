#include<bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define SIZE 100

int adj[SIZE][SIZE];
int colour[SIZE];
int parent[SIZE];
int dis[SIZE];
//int time = 0;

void dfs(int vertex);
void dfsVisit(int u , int vertex);

int main()
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


    dfs(vertex);
}


void dfs(int vertex)
{
    for(int i = 0 ; i < vertex ; i++)
        colour[i] = WHITE;
    //time = 0;
    printf("DFS is ");
    for(int i = 0 ; i<vertex ; i++)
    {
        if(colour[i] == WHITE)
        {
            dfsVisit(i , vertex);
        }
    }
}

void dfsVisit(int u , int vertex)
{
    colour[u] = GRAY;
    //dis[u] = time+1;
    for(int i = 0 ; i<vertex ; i++)
    {
        if(adj[u][i] == 1)
        {
            int v = i;
            if(colour[v] == WHITE)
            {
                parent[v] = u;
                dfsVisit(v , vertex);
            }
        }
    }
    colour[u] = BLACK;
   printf("%d ",u);

}

#include <stdio.h>

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

int main (void)
{
    int heap[6]={0,4,3,1,5,8};
    build_maxheap(heap,5);
    heap_sort(heap,5);
    int i;
    for(i=1;i<=5;i++)
        printf("%d",heap[i]);
}

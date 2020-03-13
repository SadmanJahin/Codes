#include <stdio.h>

void bubble_sort(int array[],int size)
{ int j,t,temp,k=size;
    while(k!=0)
    {
     t=0;
     for(j=0;j<=k-1;j++)
     {
         if(array[j]>array[j+1])
         {

            temp=array[j+1];
            array[j+1]=array[j];
            array[j]=temp;
            t=j;
         }
     }
     k=t;
    }
}
int binary_search(int array[],int size, int key)
{

int left=0,right=size-1,mid=(right+left)/2;
while(left<=right)
{

    if(array[mid]==key)
       return mid;

    if(key>array[mid])
        left=mid+1;
    if(key<array[mid])
        right=mid-1;

        mid=(right+left)/2;
}
return -1;
}


int main (void)

{
    int i,n=10,key;
int array[n];
for(i=0;i<n;i++)
{
    array[i]=rand()%25;
}
bubble_sort(array,n);

printf("Entered Arrays are (Sorted):");

for(i=0;i<n;i++)
    printf("%d ",array[i]);
printf("\n\nEnter Key For Search: ");
scanf("%d",&key);

if(binary_search(array,n,key)==-1)
    {
      printf("\nNot Found\n");
    }
   else printf("\nFound at index %d\n",i=binary_search(array,n,key));

return 0;
}

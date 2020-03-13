#include <stdio.h>



void insertion_sort(int array[],int size)
{
int i,j,item;
for(i=1;i<size;i++)
{
item=array[i];

j=i-1;
while( j>=0 && array[j]>item)
{

        array[j+1]=array[j];
        j--;

}
array[j+1]=item;
}
}

int main()
{
int i;
int array[]={9,1,3,5,8,4,7};

insertion_sort(array,8);
for(i=0;i<7;i++)
 printf("%d",array[i]);
 return 0;
}

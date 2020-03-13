#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double total_time;
clock_t start, end;

void copy_Array(int array[],int arrayCopy[],int n)
{
    int i;
    for(i=0;i<n;i++)
    arrayCopy[i]=array[i];

}

void bubble_sort(int array[],int size)
{
    int j,t,temp,k=size,dataMovement=0,dataComparison=0;
    while(k!=0)
    {
     t=0;
     for(j=0;j<=k-1;j++)
     {
         if( (dataComparison+=1) && array[j]>array[j+1])
         {

            temp=array[j+1];
            array[j+1]=array[j];
            array[j]=temp;
            t=j;
            dataMovement+=3;
         }
     }
     k=t;
    }
printf("           %d            %d",dataComparison,dataMovement);

}


void insertion_sort(int array[],int size)
{
int i,j,item,dataMovement=0,dataComparison=0;;
for(i=1;i<size;i++)
{
item=array[i];
dataMovement+=1;
j=i-1;
while( (dataComparison+=1) && j>=0 && array[j]>item)
{

        array[j+1]=array[j];
        j--;
     dataMovement+=1;
}
array[j+1]=item;
dataMovement+=1;
}
printf("        %d            %d",dataComparison,dataMovement);
}


void selection_sort(int array[],int size)
{
    int i,j,t,temp,dataMovement=0,dataComparison=0;
for(i=size-1;i>=1;i--)
{
    t=0;
    for(j=1;j<=i;j++)
        {if((dataComparison+=1) && array[t]<array[j])
           t=j;
        }
    temp=array[t];
   array[t]=array[i];
   array[i]=temp;
   dataMovement+=3;
}
printf("        %d            %d",dataComparison,dataMovement);


}

void display()
{
    printf("\n=========================================================================");
    printf("\n  Sort Name   ||  Data Comparison   ||  Data Movement  ||  Time");
    printf("\n=========================================================================\n");


}
int main()
{
 int i,x;
 int n=25000;
int array[n];
for(i=0;i<n;i++)
{
    array[i]=rand()%500;
}
int arrayCopy[n];

copy_Array(array,arrayCopy,n);

display();

printf("\n  Bubble");
 start = clock();//time count starts
bubble_sort(arrayCopy,n);
 end = clock();//time co unt stops
 total_time = ((double) (end - start)) / CLK_TCK;//calulate total time
 printf("         %f", total_time);


printf("\n\n");

printf("\n  Insertion");
 copy_Array(array,arrayCopy,n);
  start = clock();//time count starts
insertion_sort(arrayCopy,n);
 end = clock();//time co unt stops
 total_time = ((double) (end - start)) / CLK_TCK;//calulate total time
 printf("         %f", total_time);

 printf("\n\n");

printf("\n  Selection");
 copy_Array(array,arrayCopy,n);
  start = clock();//time count starts
selection_sort(arrayCopy,n);
 end = clock();//time co unt stops
 total_time = ((double) (end - start)) / CLK_TCK;//calulate total time
 printf("             %f", total_time);

printf("\n\n\n\n Information Shown For %d Random Data.\n\n",n);
 return 0;
}

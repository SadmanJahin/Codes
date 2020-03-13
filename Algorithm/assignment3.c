#include <stdio.h>

void quick_sort(int array[],int f , int l)
{
    int i , j,temp;
    if(f < l)
    {
        i = f+1;
        j = l;
        while (array[i] < array[f])
        {
            i++;
        }
        while(array[j] > array[f])
        {
            j--;
        }
        while(i < j)
        {

         temp=array[j];
         array[j]=array[i];
         array[i]=temp;

            while (array[i] < array[f])
            {
                i++;
            }

            while(array[j] > array[f])
            {
                j--;
            }
        }

        temp=array[f];
        array[f]=array[j];
        array[j]=temp;

        quick_sort(array,f , j-1);
        quick_sort(array,j+1 , l);
    }
}



int main (void)

{
    int i,n;
    printf("Enter Size Of Array: ");
    scanf("%d",&n+1);
int array[n];
printf("Enter Arrays: ");
for(i=0;i<n;i++)
    scanf("%d",&array[i]);

quick_sort(array,0,n-1);

for(i=0;i<n;i++)
printf("%d",array[i]);
return 0;
}

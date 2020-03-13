#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;




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


void arrayMerge(int array[] , int left , int mid , int right)
{
    int n1 = mid-left+1;
    int n2 = right-mid;
    int L[n1+1] , R[n2+1];
    for(int i = 0 ; i < n1 ; i++)
    {
        L[i] = array[left+i];
    }
    for(int j = 0 ; j < n2 ; j++)
    {
        R[j] = array[mid+1+j];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    for(int i = 0 , j = 0 , k = left ; k <= right ; k++)
    {
        if(L[i] <= R[j])
        {
            array[k] = L[i++];
        }
        else
        {
            array[k] = R[j++];
        }
    }
}

void merge_sort(int array[] , int left , int right)
{
    if(left<right)
    {
        int mid = floor((left+right)/2);
        merge_sort(array , left , mid);
        merge_sort(array, mid+1 , right);
        arrayMerge(array, left , mid , right);
    }
}

int main()
{
    int n;
    printf("Enter Size Of Array: ");
    scanf("%d",&n);
int array[60];
    for(int i = 0 ; i < n ; i++)
        scanf("%d",&array[i]);


    //quick_sort(array,0 , n-1);
     merge_sort(array , 0 , n-1);

printf("After Sorting: ");
    for(int i = 0 ; i < n ; i++)
        printf("%d ",array[i]);


}

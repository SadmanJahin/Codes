#include <stdio.h>


sortArray(int ar[],int n)
{
    int j,t,z,k=n;
    while(k!=0)
    {
     t=0;
     for(j=0;j<=k-1;j++)
     {
         if(ar[j]>ar[j+1])
         {

            z=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=z;
            t=j;
         }
     }
     k=t;
    }

}

void binarySearch(int ar[],int n, int num)
{

int first=0,last=n-1,med=(last+first)/2,count=0;
while(first<=last)
{

    if(ar[med]==num)
    {
   count=1;
   printf("Found");
   break;
    }
    if(num>ar[med])
        first=med+1;
    if(num<ar[med])
        last=med-1;

   med=(last+first)/2;

}
if(count==0)
printf("Not Found");
}

int main (void)

{

    int ar[5]={2,1,5,9,13};
    sortArray(ar,5);
    binarySearch(ar,5,3);

}

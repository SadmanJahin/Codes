#include<stdio.h>

int main()
{
    int i,j;
    int h[10][10];
    int y[10][10];
    int n[10][100];
    int I[10][10];
    int r[10][10];
    int d[10][10];
    int z[10][10];
    int e[10][10];
    int b[10][10];
    int a[10][10];
    int p[10][10];

     int t[10][10];
   char c;
   int k;

scanf("%d",&k);
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           h[i][j]='*';
           if(k==0)
           {
               h[1][2]=' ';
               h[2][2]=' ';
               h[4][2]=' ';
               h[5][2]=' ';

           }
       }
   }

   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           a[i][j]='*';
           if(k==0)
           {
               a[1][1]=' ';
               a[1][3]=' ';
               a[2][2]=' ';
               a[4][2]=' ';
               a[5][2]=' ';

           }
       }
   }

   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           p[i][j]='*';
           if(k==0)
           {
            p[2][2]=' ';
            p[4][2]=' ';
            p[4][3]=' ';
            p[5][2]=' ';
            p[5][3]=' ';

           }
       }
   }
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           y[i][j]='*';
           if(k==0)
           {

            y[1][2]=' ';
            y[2][2]=' ';
            y[3][1]=' ';
            y[3][3]=' ';
            y[4][1]=' ';
            y[4][3]=' ';
            y[5][1]=' ';
            y[5][3]=' ';

           }
       }
   }
    for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           b[i][j]='*';
           if(k==0)
           {

            b[2][2]=' ';
            b[4][2]=' ';
            b[1][3]=' ';
            b[5][3]=' ';

           }
       }
   }
       for(i=1;i<=5;i++)
        {
       for(j=1;j<=3;j++)
       {
           I[i][j]='*';
           if(k==0)
           {

            I[2][1]=' ';
            I[2][3]=' ';
            I[3][1]=' ';
            I[3][3]=' ';
            I[4][1]=' ';
            I[4][3]=' ';


           }
       }
   }
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           r[i][j]='*';
           if(k==0)
           {


            r[2][2]=' ';
            r[4][3]=' ';
            r[5][2]=' ';

           }
       }
   }

for(i=1;i<=5;i++)
        {
       for(j=1;j<=3;j++)
       {
           t[i][j]='*';
           if(k==0)
           {

            t[2][1]=' ';
            t[2][3]=' ';
            t[3][1]=' ';
            t[3][3]=' ';
            t[4][1]=' ';
            t[4][3]=' ';
            t[5][1]=' ';
            t[5][3]=' ';


           }
       }
   }
for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           d[i][j]='*';
           if(k==0)
           {
            d[1][3]=' ';
            d[2][2]=' ';
            d[3][2]=' ';
            d[4][2]=' ';
            d[5][3]=' ';

           }
       }
   }

   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           e[i][j]='*';
           if(k==0)
           {
            e[2][2]=' ';
            e[2][3]=' ';
            e[4][2]=' ';
            e[4][3]=' ';

           }
       }
   }
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
           z[i][j]='*';
           if(k==0)
           {
            z[2][1]=' ';
            z[2][2]=' ';
            z[3][1]=' ';
            z[3][2]=' ';
            z[4][1]=' ';
            z[4][2]=' ';
            z[5][1]=' ';

           }
       }
   }
    for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
           n[i][j]='*';
           if(k==0)
           {
            n[1][2]=' ';
            n[1][3]=' ';
            n[1][4]=' ';
            n[2][3]=' ';
            n[2][4]=' ';
            n[3][2]=' ';
            n[3][4]=' ';
            n[4][2]=' ';
            n[4][3]=' ';
            n[5][2]=' ';
            n[5][3]=' ';
            n[5][4]=' ';


           }
       }
   }
   //printing
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",h[i][j]);
       }
       printf("\n");

   }
   printf("\n");

   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",a[i][j]);
       }

       printf("\n");
   }
   printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",p[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",p[i][j]);
       }
       printf("\n");
   }
    printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",y[i][j]);
       }
       printf("\n");
   }

   printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",b[i][j]);
       }
       printf("\n");
   }

   printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",I[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",r[i][j]);
       }
       printf("\n");
   }
    printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",t[i][j]);
       }
       printf("\n");
   }
   printf("\n");
for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",h[i][j]);
       }
       printf("\n");
   }
   printf("\n");
for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",d[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",a[i][j]);
       }
       printf("\n");
   }
    printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",y[i][j]);
       }
       printf("\n");
   }

    printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",z[i][j]);
       }
       printf("\n");
   }
   printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",a[i][j]);
       }
       printf("\n");
   }
    printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",h[i][j]);
       }
       printf("\n");
   }
    printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=3;j++)
       {
          printf("%c",I[i][j]);
       }
       printf("\n");
   }
    printf("\n");
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
          printf("%c",n[i][j]);
       }
       printf("\n");
   }

   return 0;
}

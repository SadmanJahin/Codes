#include <stdio.h>
#include <string.h>

int stack[40];

int top=-1;
void push(int item)
{
    top+=1;
    stack[top]=item;
}
int pop()
{
    int temp=stack[top];
    stack[top]=0;
    top--;
    return temp;
}

int main (void)
{
    int i,j=0;

    char str[40];
    char temp[10];
    gets(str);
    //puts(str);
    for(i=0;i<strlen(str);i++)
   {
        if(str[i]>='0' && str[i]<='9')
           {
           temp[j]=str[i];
           j++;
           }

        if(str[i]==' ')
        {
           temp[j]='\0';
           int num=atoi(temp);
           push(num);
           j=0;
           temp[0]='\0';
        }
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
        {
            int a=pop();
            int b=pop();
            if(str[i]=='+')
         {
            push(b+a);
         }
         if(str[i]=='-')
         {
            push(b-a);
         }
         if(str[i]=='*')
         {
            push(b*a);
         }

        }

   }

 printf("Result is %d",stack[top]);
}

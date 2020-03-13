#include <stdio.h>
#include <string.h>
char stack[40];
int top=-1;
void push(char item)
{
    top+=1;
    stack[top]=item;
}
char pop()
{
    return stack[top--];
}

int main(void)
{
    int i;
    char check[10];
char str[40];
gets(str);
puts(str);

for(i=0;i<strlen(str);i++)
{
    push(str[i]);
}
if((top+1)%2!=0)
{
    printf("Not Equal");
    return;
}
i=0;
int temp=(top+1)/2;
printf("%d",temp);
while(top>=temp)
{
   check[i]=pop();
   if(i>=1)
   {
       if(check[i-1]==check[i])
          continue;
       if(check[i-1]==']')
       {
           if(check[i]==')')
            continue;
            if(check[i]!='}')
                {
                    printf("Not Equals hey");
                }
       }
        if(check[i-1]=='}')
       {
            if(check[i]!=')')
                {
                    printf("Not Equal hello");
                }
       }
        printf("\n%c %c\n",check[i],check[i-1]);
   }

   i++;
}
while(top>=0)
{
   check[i]=pop();
   if(i>=1)
   {
       if(check[i-1]==check[i])
          continue;
       if(check[i-1]=='(')
       {
           if(check[i]=='[')
            continue;
            if(check[i]!='{')
                {
                    printf("Not Equals how");
                }
       }
        if(check[i-1]=='{')
       {
            if(check[i]!='[')
                {
                    printf("Not Equal why");
                }
       }
        printf("\n%c %c\n",check[i],check[i-1]);
   }

   i++;
}



}

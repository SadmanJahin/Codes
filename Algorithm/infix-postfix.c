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
    char temp=stack[top];
    stack[top]='#';
    top--;
    return temp;
    //return stack[top--];
}
void InfixToPostfix()
{
    int i,j=0,len;
    char str[40];
    char postfix[40];
gets(str);
len=strlen(str);
str[len]='$';
str[len+1]='\0';
puts(str);

for(i=0;i<strlen(str);i++)
{
    if( str[i]=='(')
        push(str[i]);
    if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
    {
      if(stack[top]=='*' || stack[top]== '/')
          {
          postfix[j]=pop();
          push(str[i]);
          j++;
          }
      else
        push(str[i]);
    }
    if(str[i]>='A' && str[i]<='Z')
    {
        postfix[j]=str[i];
        j++;
    }
    if( str[i]==')')
    {

      while(stack[top]!='(')
        {
          postfix[j]=pop();
           j++;
        }
   }
   if(str[i]=='$')
   {
       while(top>=0)
        {
        if(stack[top]=='+' || stack[top]=='-' || stack[top]=='*' || stack[top]=='/')
        {
        postfix[j]=pop();
        j++;
        }
        else
        pop();
        }
   }

}

postfix[j]='\0';
puts(postfix);

}



int main(void)
{
InfixToPostfix();
}

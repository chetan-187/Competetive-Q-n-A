/*
#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void menu(){
  printf("    Stack using Array\n");
  printf("----------------------------------------\n");
  printf("1. Push\n");
  printf("2. Pop\n");
  printf("3. Display\n");
  printf("4. Quit\n");
}

void main ()
{

    printf("Enter the size of stack-> ");
    scanf("%d",&n);
    while(choice != 4)
    {
        menu();
        printf("\n Enter your choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                break;
            }
            default:
            {
                printf("Invalid option chosen, valid option is from 1 - 4\n");
            }
        };
    }
}

void push ()
{
    int val;
    if (top == n-1 )
    printf("Stack Overflow\n");
    else
    {
        printf("Enter the value->");
        scanf("%d",&val);
        top = top +1;
        stack[top] = val;
    }
}

void pop ()
{
    if(top == -1)
    printf("Stack Underflow\n");
    else
    top = top -1;
}
void show()
{
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
}
*/

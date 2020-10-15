/*
#include<stdio.h>

#include<string.h>
#define MAX 2000

struct stack
{
    char a[MAX];
    int top;
}s;

void push(char val)
{
    if (s.top == (MAX - 1))
        printf ("Stack is Full\n");
    else{
        s.top = s.top + 1;
        s.a[s.top] = val;
}}

void pop(){
    if (s.top == - 1){
        printf ("Stack is Empty\n");
}
    else{
        s.top = s.top - 1;
}}

int main()
{
    char str[MAX];
    int i = 0;
    s.top = -1;
    printf("\nEner the Expression : ");
    scanf("%s", str);
    for(i = 0;i < strlen(str);i++){
    if(str[i] == '(' || str[i] == '[' || str[i] == '{')
    {
        push(str[i]);
        continue;
}
    else if(str[i] == ')' || str[i] == ']' || str[i] == '}')
    {
        if(str[i] == ')')
    {
        if(s.a[s.top] == '(')
    {
    pop();
    }
    else
    {
    printf("\nNot Matching\n");
    printf("%d",i+1);
        break;
}}
    if(str[i] == ']')
{
    if(s.a[s.top] == '[')
{
    pop();
}
    else
{
    printf("\nNot Matching\n");
    printf("%d",i+1);
    break;
}}
    if(str[i] == '}')
{
    if(s.a[s.top] == '{')
{
    pop();
}
    else
{
    printf("\nNot Matching\n");
    printf("At index %d",i+1);
    break;
}}}}
    if(s.top == -1)
{
    printf("\nMatching\n");
}}
*/

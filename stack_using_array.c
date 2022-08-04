#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stackArr[MAX];
int top = -1;
int isFull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stackArr[top];
}
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    int a = stackArr[top];
    top = top - 1;
    printf("element %d is popped \n ", a);
    return a;
}
void push(int value)
{
    if (top >= MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stackArr[top] = value;
    printf("%d Element is pushed\n", value);
}
void showStack()
{
    int i;
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    printf("Element in Stack :\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d\t", stackArr[i]);
    }
}
int main()
{
    push(5);
    push(4);
    push(7);
    push(1);
    pop();
    pop();

    return 0;
}

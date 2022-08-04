#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stackArr[MAX];
int top1 = -1;
int top2 = MAX;
int isEmptyStack1()
{
    if (top1 == -1)
        return 1;
    else
        return 0;
}
int isEmptyStack2()
{
    if (top2 == MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peekStack1()
{
    if (isEmptyStack1())
    {
        printf("Stack1 is Underflow\n");
    }
    else
    {
        return stackArr[top1];
    }
}
int peekStack2()
{
    if (isEmptyStack2())
    {
        printf("Stack2 is Underflow\n");
    }
    return stackArr[top2];
}
void pushStack1(int value)
{
    if (top2 == top1 + 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top1 = top1 + 1;
        stackArr[top1] = value;
        printf("%d Element is pushed in stack1\n", value);
    }
}
void pushStack2(int value)
{
    if (top2 == top1 + 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top2 = top2 - 1;
        stackArr[top2] = value;
        printf("%d Element is pushed in stack2\n", value);
    }
}
int popStack1()
{
    if (top1 == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int a = stackArr[top1];
        top1 = top1 - 1;
        return a;
    }
}
int popStack2()
{
    if (top2 == MAX)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int a = stackArr[top2];
        top2 = top2 + 1;
        return a;
    }
}

void showStack1()
{
    if (isEmptyStack1())
    {
        printf("Stack Underflow\n");
    }
    for (int i = top1; i >= 0; i--)
    {
        printf("%d\t", stackArr[i]);
    }
    printf("\n");
}
void showStack2()
{
    if (isEmptyStack2())
    {
        printf("Stack Underflow\n");
    }
    for (int i = top2; i < MAX; i++)
    {
        printf("%d\t", stackArr[i]);
    }
    printf("\n");
}
int main()
{
    int value, choice;
    printf("Enter 1 for push Element in Stack1\n");
    printf("Enter 2 for push Element in Stack2\n");
    printf("Enter 3 for pop Element from Stack1\n");
    printf("Enter 4 for pop Element from Stack2\n");
    printf("Enter 5 for peek element of Stack1\n");
    printf("Enter 6 for peek element of Stack2\n");
    printf("Enter 7 for printing elements of Stack1\n");
    printf("Enter 8 for printing elements of Stack2\n");
    printf("Enter 9 for exit\n");

    for (int i = 0; i < 100; i++)
    {
        printf("Enter choice :\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element :\n");
            scanf("%d", &value);
            pushStack1(value);
            break;
        case 2:
            printf("Enter the element :\n");
            scanf("%d", &value);
            pushStack2(value);
            break;
        case 3:
            value = popStack1();
            printf("Popped Element from stack1 :%d\n", value);
            break;
        case 4:
            value = popStack2();
            printf("Popped Element from stack2 :%d\n", value);
            break;
        case 5:
            value = peekStack1();
            printf("Peek element of stack1 :%d\n", value);
            break;
        case 6:
            value = peekStack2();
            printf("Peek element of stack2 :%d\n", value);
            break;
        case 7:
            printf("Element of stack1 :\n");
            showStack1();
            break;
        case 8:
            printf("Element of Stack2 :\n");
            showStack2();
            break;
        case 9:
            exit(1);
        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}

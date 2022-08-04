#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linked_list(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *deleteFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head;
    int i = 0;
    while (i < index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteAtLast(struct node *head)
{
    struct node *p = head;
    struct node *q = p->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct node *deleteAtValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = p->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 56;
    third->next = NULL;

    printf("Linked list before deletion :-\n ");
    linked_list(head);

    head = deleteAtValue(head, 11);

    printf("Linked list after deletion :-\n");
    linked_list(head);

    return 0;
}
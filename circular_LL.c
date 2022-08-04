#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linked_list(struct node *ptr)
{
    struct node *head = ptr;
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 56;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = head;

    printf("Linked before insertion :-\n");
    linked_list(head);

    head = insertAtFirst(head, 78);

    printf("Linked list after insertion :-\n");
    linked_list(head);

    return 0;
}
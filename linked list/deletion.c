#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deleteFromFirst(struct node *ptr)
{
    struct node *p = ptr;
    p = p->next;
    ptr->next = NULL;
    free(ptr);
    return p;
}
struct node *deleteInBetween(struct node *ptr, int delIndex)
{
    int index = 0;
    struct node *p = ptr;
    struct node *q = p;
    while (index != delIndex - 1)
    {
        p = p->next;
        q = p->next;
        index++;
    }
    p->next = q->next;
    free(q);
    return ptr;
}
struct node *deleteFromEnd(struct node *ptr)
{
    struct node *p = ptr;
    struct node *q;
    while (p->next != NULL)
    {
        q = p;
        p = p->next;
       
    }
    q->next = NULL;
    free(p);
    return ptr;
}
int main()
{
    struct node *head, *second, *third, *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->next = second;
    head->data = 10;
    second->next = third;
    second->data = 12;
    third->next = fourth;
    third->data = 14;
    fourth->next = NULL;
    fourth->data = 16;
    // struct node *newHead = deleteFromFirst(head);
    // struct node *newNode = deleteInBetween(head, 2);
    struct node *newNode = deleteFromEnd(head);
    traverse(newNode);
    return 0;
}
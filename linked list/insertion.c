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
// struct node *insertAtBigninng(struct node *ptr, int newData)
// {
//     struct node *newPtr = (struct node *)malloc(sizeof(struct node));
//     newPtr->next = ptr;
//     newPtr->data = newData;
//     return newPtr;
// }
// void insertInBetween(struct node *ptr, int newData, int index)
// {
//     int i = 0;
//     struct node *newPtr = (struct node *)malloc(sizeof(struct node));
//     struct node *ptrhead;
//     ptrhead = ptr;
//     while (i != index - 1)
//     {
//         ptrhead = ptrhead->next;
//         i++;
//     }
//     newPtr->data = newData;
//     newPtr->next = ptrhead->next;
//     ptrhead->next = newPtr;
// }
// void insertAtEnd(struct node *ptr, int newData)
// {
//     int i = 0;
//     struct node *newptr = (struct node *)malloc(sizeof(struct node));
//     struct node *p = ptr;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next=newptr;
//     newptr->data = newData;
//     newptr->next = NULL;
// }
void insertAfterNode(struct node *previousNode, int newData)
{
    int i = 0;
    struct node *newptr = (struct node *)malloc(sizeof(struct node));
    newptr->data=newData;
    newptr->next=previousNode->next;
    previousNode->next=newptr;

}
int main()
{
    struct node *head, *second, *third, *fourth, *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 9;
    second->next = third;
    third->data = 11;
    third->next = fourth;
    fourth->data = 14;
    fourth->next = fifth;
    fifth->data = 13;
    fifth->next = NULL;
    // traverse(head);
    // head = insertAtBigninng(head, 56);
    // traverse(head);
    // insertInBetween(head, 12, 3);
    // traverse(head);
    // insertAtEnd(head, 12);
    insertAfterNode(second,12);
    traverse(head);
    return 0;
}
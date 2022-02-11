#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
// DISPLAY
void listdisplay(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Data: " << ptr->data;
        cout << endl;
        ptr = ptr->next;
    }
}
// DELETE FIRST
struct node *deletefirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// DELETE INDEX
struct node *deleteindex(struct node *head, int index)
{
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}
// DELETE DATA
struct node *deleteatdata(struct node *head, int data)
{
    struct node *p = head;
    struct node *q = p->next;
    while (q->data != data && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data = data)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
struct node *deletelast(struct node *head)
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

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    cout << "before deletion;-\n";
    listdisplay(head);
    head = deletefirst(head); // deletion from first
    cout << "\n After deletion:-\n";
    // head=deleteindex(head,3); // deletion at index
    // head=deletelast(head);  // Delete from last
    // head=deleteatdata(head,20);// delete from given data
    listdisplay(head);
    return 0;
}
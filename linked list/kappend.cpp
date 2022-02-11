#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int length(struct node *head)
{
    int l = 0;
    while (head != NULL)
    {
        l++;
        head = head->next;
    }
    return l;
}
struct node *kappend(struct node *head, int k)
{
    int l = length(head);
    k = k % l;
    struct node *nh;
    struct node *nt;
    struct node *tail = head;

    int c = 1;
    while (tail->next = NULL)
    {
        if (c == l - k)
        {
            nt = tail;
        }
        if (c == l - k + 1)
        {
            nh = tail;
        }
        tail = tail->next;
        c++;
    }
    nt->next = NULL;
    tail->next = head;
    return nh;
}
void listdisplay(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Data: " << ptr->data;
        cout << endl;
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *five;
    struct node *six;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = five;

    five->data = 50;
    five->next = six;

    six->data = 60;
    six->next = NULL;

    listdisplay(head);
    head = kappend(head, 3);
    listdisplay(head);
    return 0;
}
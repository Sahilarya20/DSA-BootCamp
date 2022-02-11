#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;
void display(struct node *ptr)
{
    cout << "NULL<-";
    while (ptr != NULL)
    {
        cout << ptr->data << "->";

        ptr = ptr->next;
       
    }
     cout<<"null";
}
void insertafter(int data){
    
     struct node *ptr = (struct node *)malloc(sizeof(struct node));
     ptr->data=data;
     struct node *temp = head;
     while(temp->next=NULL){
         temp=temp->next;
     }
     temp->next=ptr;
     ptr->prev=temp;
     ptr->next=NULL;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->prev = NULL;
    head->next = second;
    second->data = 20;
    second->prev = head;
    second->next = third;
    third->data = 30;
    third->prev = second;
    third->next = fourth;
    fourth->data = 40;
    fourth->prev = third;
    fourth->next = NULL;
    insertafter(50);
    display(head);

    return 0;
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void listdisplay(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Data: " << ptr->data;
        cout << endl;
        ptr = ptr->next;
    }
}
struct node* makecycle(struct node* head,int pos){
        struct node* temp=head;
        struct node* startnode=(struct node*)malloc(sizeof(struct node));
        int c=1;
        while(temp->next=NULL){
            
            if(c==pos){
                startnode=temp;
            }
            temp=temp->next;
            c++;

        }
        temp->next=startnode; 
        return head;
}
bool detectcycle(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {return true;
        }
      
    }
      return false;
}
struct node* removecycle(struct node* head){
    struct node *slow = head;
    struct node *fast = head;
    do{
        slow=slow->next;
        fast=fast->next;
    }while(slow!=fast);

    fast=head;
    while (slow->next!=fast->next)
    {
       slow=slow->next;
       fast=fast->next;

    }
    slow->next=NULL;
    return head;


}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *five;
    struct node *six;
    struct node *seven;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));
    seven = (struct node *)malloc(sizeof(struct node));

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
    six->next = third;

    seven->data = 70;
    seven->next = NULL;

    // listdisplay(head);
    head=makecycle(head,3);
     cout<<detectcycle(head)<<"\n";
    
    head=removecycle(head);
   cout<<detectcycle(head)<<"\n";

    
    return 0;
}


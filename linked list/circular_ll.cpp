#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void clltraversal(struct node * head){
    struct node* p=head;
    while(p->next!=head){
        cout<<p->data<<"\n";
        p=p->next;

    }
    cout<<p->data<<"\n";
    // method 2
    // do
    // {
    //     cout<<p->data<<" ";
    //     p=p->next;
    // } while (p!=head);
    
}
struct node* insertatbeg(struct node* head,int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;

    struct node* p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node* insertatend(struct node* head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
}

struct node* insertatindex(struct node* head,int data,int index){
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
     struct node* p=head;
     int i=0;
     while(i!=index-1){
         p=p->next;
         i++;
     }
     ptr->next=p->next;
     p->next=ptr;
     return head; 
 }


int main(){
    
     struct node* head;
     struct node* second;
     struct node* third;
     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
    
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=head;
    cout<<"before\n";
    clltraversal(head);
    cout<<"after\n";
    
    head=insertatindex(head,50,4);
    // head=insertatbeg(head,5230);

    clltraversal(head);
    return 0;
}
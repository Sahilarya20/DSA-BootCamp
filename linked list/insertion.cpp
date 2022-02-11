#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void listdisplay( struct node* ptr){
    int i=1;
    while(ptr!=NULL){
        cout<<"Data"<<i <<":-"<<ptr->data;
        cout<<endl;
        ptr=ptr->next; 
        i++;
    }
}
 struct node* insertatbegining(struct node* head,int data){
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
     ptr->next=head;
     return ptr;
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
 struct node*insertatend(struct node* head,int data){
     struct node* ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
     struct node* p=head;
     while(p->next!=NULL){
        p=p->next;
     }
     p->next=ptr;
     ptr->next=NULL;
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
    third->next=NULL;

    listdisplay(head);
    cout<<endl;
     // inert at begining 0(1)-------------------------------------
            head= insertatbegining(head,51);
    // insert at index O(n)--------------------------
            head=insertatindex(head,512,2);
    // insert at end O(n);
    int sahil;
    cout<<"enter the value";
    cin>>sahil;
            head= insertatend(head,sahil);
   listdisplay(head);
    return 0;
}
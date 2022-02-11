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
 void evennafterodd(struct node* head){
     if(head == nullptr)
    return ;
     struct node* odd=head;
     struct node* even=head->next;
     struct node* evenvenstart=even;
     while(even!=NULL && even->next!=NULL){
         odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
     }
     odd->next=evenvenstart;
    //  if(odd->next!=NULL){
    //      even->next=NULL;
    //  }
 }
 

int main(){
     struct node* head;
     struct node* second;
     struct node* third;
     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

  
   head=insertatend(head,4);
   head=insertatend(head,5);
//    head=insertatend(head,6);
 listdisplay(head);
 cout<<endl;
   
   evennafterodd(head);
   listdisplay(head);
    return 0;
}
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
void listdisplay( struct node* ptr){
    while(ptr!=NULL){
        cout<<"Data: "<<ptr->data;
        cout<<endl;
        ptr=ptr->next; 
    }
}
struct node* reversek(struct node* head,int k){
    struct node*prev=NULL;
    struct node*curr=head;
    struct node*nextpt;
    int c=0;
    while(curr!=NULL && c<k){
        nextpt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextpt;
        c++;
    }
    if(nextpt!=NULL)
    head->next=reversek(nextpt,k);
    return prev;
}
int main(){
     struct node* head;
     struct node* second;
     struct node* third;
     struct node* fourth;
     struct node* five;
     struct node* six;
     head=(struct node*)malloc(sizeof(struct node));
     second=(struct node*)malloc(sizeof(struct node));
     third=(struct node*)malloc(sizeof(struct node));
     fourth=(struct node*)malloc(sizeof(struct node));
     five=(struct node*)malloc(sizeof(struct node));
     six=(struct node*)malloc(sizeof(struct node));
    
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=five;

    five->data=50;
    five->next=six;

    six->data=60;
    six->next=NULL;

    listdisplay(head);
    cout<<"reverse\n";
    head=reversek(head,2);
     listdisplay(head);
    return 0;
}
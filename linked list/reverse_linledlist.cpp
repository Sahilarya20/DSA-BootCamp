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
struct node* reversell(struct node* head)
{   
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct node* p=reversell(head->next);
    
    head->next->next=head;
    head->next=NULL;
    return p;

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
    cout<<"Before reverse:-\n";
listdisplay(head);
cout<<"After reverse:-\n";
         head=reversell(head);
    listdisplay(head);
    return 0;
}
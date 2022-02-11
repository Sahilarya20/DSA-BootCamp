#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

bool cycleDetection(Node *head)
{
    if (head == NULL || head->next == NULL)
    
        return false;
    

    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow){

            return true;
        }
    }
    return false;
}

void display(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(2);
    Node *second = new Node(4);
    Node *third = new Node(6);
    Node *fourth= new Node(8);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next=NULL;

    // display(head);

    // cout<<endl;

    cout<< cycleDetection(head);
    
    // if(cycleDetection(head)){
    //     cout<<"yes";}
    // else{
    // cout<<"no";}

    return 0;
}
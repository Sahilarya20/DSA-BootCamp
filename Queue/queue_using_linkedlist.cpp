#include <bits\stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Queuee
{

    node *front;
    node *back;

public:
    Queuee()
    {
        front = NULL;
        back = NULL;
    }

    void insert(int x)
    {
        node *p = new node(x);
        if (front == NULL)
        {
            back = p;
            front = p;
            return;
        }
        back->next = p;
        back = p;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "can't, pop no elemet\n";
            return;
        }
        node *todele = front;
        front = front->next;
        delete todele;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "underflow front= ";
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        else
        return false;
    }
};

int main()
{

    Queuee q;
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    
    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();
     cout << q.peek() << endl;
    q.pop();
    
    cout << q.empty();

    return 0;
}

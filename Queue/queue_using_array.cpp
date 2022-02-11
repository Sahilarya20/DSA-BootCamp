#include<iostream>
#include<stdio.h>
using namespace std;
#define n 20
class queue
{

    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void push(int data)
    {
        if (back == n - 1)
        {
            cout << "overflow\n";
            return;
        }
        back++;
        arr[back] = data;

        //  for first element

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 or front > back)
        {
            cout << "No data in  Queue pop\n";
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 or front > back)
        {
            cout << "No data in  Queue front= ";
            return -1;
        }
        else
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 or front > back)
        {
            cout << "No data in  Queue emp\n";
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

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
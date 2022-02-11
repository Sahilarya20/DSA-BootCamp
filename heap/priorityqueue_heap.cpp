#include<iostream>
#include<queue>
using namespace std;

int main(){
    // ....................................MAX HEAP
    priority_queue<int,vector<int> >  pq;
    pq.push(1);
    pq.push(5);
    pq.push(3);
    pq.push(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

     priority_queue<char> pqc;
    pqc.push('a');
    pqc.push('b');
    pqc.push('c');
    pqc.push('d');
    cout<<pqc.top()<<endl;
    pqc.pop();
    cout<<pqc.top()<<endl;

    // .............................MIN HEAP.

    priority_queue<int,vector<int>, greater<int> > pqm;
    pqm.push(7);
    pqm.push(17);
    pqm.push(67);
    pqm.push(675);
     cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;
    return 0;
}
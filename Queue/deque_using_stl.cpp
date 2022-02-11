#include<iostream>
#include<deque>
using namespace std;
//...................................................... deque is the mixture of stack and queue
int main(){
    deque<int> s;
    s.push_back(1);
    s.push_front(2);
    s.push_back(3);
    s.push_front(5);
    for(int i:s){
        cout<<i<<" ";
    }
    s.pop_front();
    s.pop_back();
    cout<<endl;
for(int i:s){
    
        cout<<i<<" ";
    }
    return 0;
}
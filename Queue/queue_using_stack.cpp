#include<iostream>
#include<stack>
using namespace std;


// appproch 1 using 2stack


// class queue{
//     stack<int> s1;
//     stack<int> s2;

//     public:
//     void insert(int x){
//         s1.push(x);
//     }

//     int pop(){
//         // check if both  stack empty
//         if(s1.empty() && s2.empty()){      
//             cout<<"empty front=";
//             return -1;
//         }
//         if(s2.empty()){
//             // 12345(s1) to 54321(s2) 
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
           
//         }
//         // display only top element of s2
//          int topval=s2.top();
//             s2.pop();
//             return topval;
//     }

//     bool empty(){
//         if(s1.empty() and s2.empty()){
//             return true;
//         }
//         return false;
//     }
// };


// approach 2    using 1 stack recusrively

class queue{
    stack<int> s1;
    

    public:
    void insert(int x){
        s1.push(x);
    }

    int pop(){
        // check if both  stack empty
        if(s1.empty()){      
            cout<<"empty front=";
            return -1;
        }
       int x=s1.top();
       s1.pop();
       if(s1.empty()){
           return x;
       }
       int item=pop();
       s1.push(x);
       return item;
    }

    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.insert(1);
    q.insert(2);
    q.insert(3);          
    q.insert(4);
    
    cout<<q.pop()<<endl;
     cout<<q.pop()<<endl;
      cout<<q.pop()<<endl;
       cout<<q.pop()<<endl;
        cout<<q.pop()<<endl;
         cout<<q.pop()<<endl;




    return 0;
}
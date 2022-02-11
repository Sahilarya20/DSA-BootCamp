#include<iostream>
using namespace std;
#define n 50
class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int data){
        if(top==n-1){
            cout<<"stack overflow\n";
            return;
        }
        top++;
        arr[top]=data;
    }

    void pop(){
        if(top==-1){
            cout<<"no  element to pop\n";
            return;
        }

        top--;
    }

    int Top(){
         if(top==-1){
            cout<<"no element in stack";
            return -1;
        }
        return arr[top];

    }

    bool empty(){
       if(top==-1){
           return true;
       }
       return false;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty();
    return 0;
}

#include<iostream>
using namespace std;
 int fib(int n){
     int t1=0,t2=1,sahil;
     for(int i=1;i<=n;i++){
         cout<<t1;
         sahil=t1+t2;
         t1=t2;
         t2=sahil;
         
     }
     return 0;
 }

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}
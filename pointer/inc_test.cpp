#include<iostream>
using namespace std;
int inc(int &a){
    a++;
    
    return a ;
}
int main(){
    int a;
    cin>>a;
    inc(a);
    cout<<a;
    return 0;

}

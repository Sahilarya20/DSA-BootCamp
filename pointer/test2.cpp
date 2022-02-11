// #include<iostream>
// using namespace std;
// int sahil(int& p,int& q){
//     cout<<&p<< " "<<&q;
//     int temp=p;
//     p=q;
//     q=temp;
    
//     return 0;
// }
// int main()
// {   int a;
//     int b;
//     cin>>a>>b;
// sahil(a,b);
// cout<<a<<" "<<b;
//     return 0;
    
// } 
#include<iostream>
using namespace std;
int sahil(int* p,int* q){
    cout<<&p<< " "<<&q;
    int temp=*p;
    *p=*q;
    *q=temp;
    
    return 0;
}
int main()
{   int a;
    int b;
    cin>>a>>b;
sahil(&a,&b);
cout<<a<<" "<<b;
    return 0;
    
} 
#include<iostream>
using namespace std;
int sum(int &a,int &b){
    int p=a+b;
    return p;
}
int main()
{
    int a,b;
    cin>>a>>b;
    sum(a,b);
    return 0;

}
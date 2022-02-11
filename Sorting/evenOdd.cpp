#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
    cout<<"Entet a Number: ";
    int n;
    cin>>n;
    if(n%2==0)cout<<"it is even\n";
    else cout<<"it is odd\n";
    return 0;
}
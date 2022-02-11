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
    
    int n;
    cin>>n;
    vector<int> fib(n+2,0);
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n+2;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<fib[n+2];
    return 0;
}
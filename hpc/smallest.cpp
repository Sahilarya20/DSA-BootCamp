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
    int a,b;
    cin>>a>>b;
    if(a<b)cout<<a<<" is Smallest \n";
    else{
        cout<<b<<" is Smallest\n";
    }
    return 0;
}
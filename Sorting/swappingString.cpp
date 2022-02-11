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
    
    string str1,str2,temp;
    cin>>str1;
    cin>>str2;
    // swapping strings by Usinig another string
    temp=str1;
    str1=str2;
    str2=temp;
    cout<<"After swaping: ";
    cout<<str1<<" "<<str2;

    return 0;
}
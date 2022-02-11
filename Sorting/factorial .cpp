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

int fact(int n){
	if(n==0){
		return 1;
	}
	int pfact=fact(n-1);
	return n*pfact;
	
}

int main(){
    cout<<"Ente a number: ";
    int n;
    cin>>n;
    cout<<fact(n);
    
    
    return 0;
}
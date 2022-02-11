#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define ll long long 
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
    
    int t;cin>>t;
    while(t--){
    ll x,k; 

    cin>>x>>k; 

    int min,max; 

    if(x*2<=x*k){ 

        min=x*2; 

    

    } 

    

    else if(x%2!=0){ 

        min=x*(x+1); 

    } 

    else{ 

        min=x*(x+2); 

    } 

    max=(x*k*(x*k-1)); 

    cout<<min<<" "<<max<<endl; 

 
    }
    return 0;
}
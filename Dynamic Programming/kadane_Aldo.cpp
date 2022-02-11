#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
// TIME COMPLEXITY:-o(N)

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
    int n;cin>>n;
    vi a(n);
    for(auto&i:a)cin>>i;
    int curr=0,max_till_now=INT_MIN;
    lp(i,0,n){
        curr+=a[i];
        max_till_now=max(max_till_now,curr);
       
        if(curr<=0){
            curr=0;
        }
        
    }
    cout<<endl;
    cout<<max_till_now<<" ";  
    return 0;
} 
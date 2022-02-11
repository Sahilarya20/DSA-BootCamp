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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string ans="";
        if(n==m){
            lp(i,0,n+1)ans+="01";
            
        }
        else if(m>n){
            lp(i,0,n+1)ans+="10";
            lp(i,0,m-n-1)ans+="110";
            ans+="1";

        }
        else{
            lp(i,0,m)ans+="01";;
            lp(i,0,n-m)ans+="010";
        }
        cout<<ans.size()<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
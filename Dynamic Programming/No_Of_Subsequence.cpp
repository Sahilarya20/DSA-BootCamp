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
    string s;
    cin>>s;

    int e=1,a=0,ab=0,abc=0;

    lp(i,0,n){
        if(s[i]=='a')a+=e;
        else if(s[i]=='b')ab+=a;
        else if(s[i]=='c')abc+=ab;
        else if(s[i]=='?'){
            abc=3*abc+ab;
            ab=3*ab+a;
            a=3*a+e;
        }  
    }
    cout<<abc<<" ";
    return 0;
}
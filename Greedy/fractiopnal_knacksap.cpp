#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    double a=(double)p1.first/p1.second;
    double b=(double)p2.first/p2.second;
    return a>b;

}
#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
    
    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    lp(i,0,n){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),comp);
    //........ To check what comp gives
    // for(auto x:v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    int w;
    cin>>w;
    int ans=0;
    lp(i,0,n){
        // if(w>=v[i].second){
        //     ans+=v[i].first;
        //     w-=v[i].second;
        //     continue;
        // }
        // double vw=(double) v[i].first/v[i].second;
        // ans+=vw*w;
        // w=0;
        // break;
        // Another method.........................
        if(w>=v[i].second){
            ans+=v[i].first;
            w-=v[i].second;
        }
        else{
            double vw=(double) v[i].first/v[i].second;
        ans+=vw*w;
        break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
// 5
// 21 7
// 24 4
// 12 6
// 40 5
// 30 6
// 20
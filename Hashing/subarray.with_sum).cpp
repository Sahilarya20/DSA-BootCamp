#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> cnt;
    
    int prfSum=0;
    for(int i=0;i<n;i++){
        prfSum+=a[i];
        cnt[prfSum]++; 

    }
    int ans=0;
    for(auto it:cnt){
        int c=it.second;
        ans+=(c*(c-1))/2;
        if(it.first==0){
            ans+=it.second;
        }
    }
    cout<<ans;
    
    return 0;
}
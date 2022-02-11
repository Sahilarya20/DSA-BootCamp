#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int main(){
    
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    // .................................ITERATING USING ITERATOR IT
    // map<int,int> :: iterator it;
    // for(it=freq.begin();it!=freq.end();it++){
    //     cout<<it->first<<"->"<<it->second<<endl;
    // }
    // ........................ITERATE USING AUTO 
    for(auto x:freq){
         cout<<x.first<<"->"<<x.second<<endl;
    }

    
    return 0;
}
#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    for(auto i:a){
        cout<<i;
    }
    return 0;
}
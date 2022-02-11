// complexity:O(n) 
#include<iostream>
#include<vector>
using namespace std;

void Number3(vector<int> arr,int k){
    pair<int,int> ans;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    bool found=false;
    if(sum%3==0){
        found=true;
        ans=make_pair(0,k-1);
    }
    for(int j=k;j<arr.size();j++){
        if(found) break;
        sum=sum+arr[j]-arr[j-k];
        if(sum%3==0){
            found=true;
            ans=make_pair(j-k+1,j);
        }
    }
    if(found==false){
        ans=make_pair(-1,0);

    }
    if(ans.first==-1){
        cout<<"No elements"<<endl;
    }
    else{
        for(int i=ans.first;i<=ans.second;i++){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    vector<int> arr = { 84, 23, 45,12, 56, 82 };
    int K = 3;
 
    // Function Call
    Number3(arr, K);
    return 0;
}
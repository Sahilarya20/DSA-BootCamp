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
    int arr[n];
    // 5
// 3 5 2 1 4
    lp(i,0,n)cin>>arr[i];

    int i=0;
    while(i<n){
        
        int correct=arr[i]-1;
        if(arr[i]!=arr[correct]){
            int temp=arr[i];
            arr[i]=arr[correct];
            arr[correct]=temp ;

        }
        else i++;
    }
    lp(i,0,n)cout<<arr[i]<<" ";

    return 0;
}
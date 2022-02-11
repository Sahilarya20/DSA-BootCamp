#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
// https://www.youtube.com/watch?v=jH_5ypQggWg
#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int inf=1e5;
int main(){
    
    int n;
    cin>>n;
    vi arr(n);
//     11
// 1 3 5 8 9 2 6 7 6 8 9 
    for(auto &i:arr){
        cin>>i;
    }
    vi jump(n,inf);
   if(arr[0]==0)return -1;
   jump[0]=0;
   for(int i=1;i<n;i++){ 
       for(int j=0;j<=i;j++){
           if(jump[j]!=inf and arr[j]+j>=i)
           jump[i]=min(jump[i],jump[j]+1);

       }
   }
   cout<<jump[n-1]; 
    return 0;
}
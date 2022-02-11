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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long

// int power(int x,int y,int p){
//     int res=1;
//     x=x%p;
//     while(y>0){
//         if(y&1){
//             res==(res*x)%p;
//         }
//         y=y>>1;
//         x=(x*x)%p;
//     }
//     return res;
// }
int power(int a,int b,int m)
{
 int x=1,y=a;
 while(b>0)
 {
  if(b & 1)
   x=(x*y)%m;
  y=(y*y)%m;
  b>>=1;
 }
 return x;
}

int modInverse(int a,int p){
    return power(a,p-2,p);
}

int modFact(int n,int p){
    if(p<=n)return 0;
    int res=1;
    for(int i=n+1;i<p;i++){
        // res=(res*modInverse(i,p))%p;
        res=(res*(power(i,p+2,p)))%p;

    }
    return p-res;
}
int32_t main(){
    fast;
    int t;
    cin>>t;
        // 3
        // 2 5
        // 5 11
        // 21 71
    while(t--){
         int n,p;
        cin>>n>>p;
        cout<<modFact(n,p)<<endl;
        
    }
// return 0;
   
}
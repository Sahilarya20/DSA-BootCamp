#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define modulo 1000000007;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll count;
        if(n==1){
            cout<<1<<endl;
        }
        else{
            n--;
            count=1;
            ll a=2;
            while(n>0)
            {
                if(n&1){
                    count=count*a % modulo;
                }
                a=a*a % modulo;
                n>>=1;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
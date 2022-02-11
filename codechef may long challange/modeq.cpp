#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

ll t;
cin>>t;

while(t--){
ll m,n;
ll count = 0;
vector<long long> mod{}

for(ll a=2; a<=n;a++){
ll x=m%a;
count += mod[x];
for(ll b=x;b<=n;b+=a){
mod[b]++;
}
}

cout<<count<<endl;
}

return 0;
}
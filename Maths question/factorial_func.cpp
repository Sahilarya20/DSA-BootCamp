#include<iostream>
using namespace std;
int fac(int a){
    int p=1;
    for(int i=1;i<=a;i++){
        p=p*i;
    }
    
    return p;
}
int main()
{   int n;
    cin>>n;
    int ans=fac(n);
    cout<<ans;
    return 0;
}
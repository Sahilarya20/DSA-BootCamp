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
{   int c,r;
    cin>>c>>r;
int ans=fac(c)/(fac(r)*fac(c-r));
cout<<ans;
    return 0;
}
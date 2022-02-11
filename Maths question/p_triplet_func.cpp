#include<iostream>
using namespace std;
bool check(int a,int b,int c){
    int max;
    int d,f;
    if(a>b&&a>c){
        max=a;
        d=b;
        f=c;

    }
    else if(b>a&&b>c){
        max=b;
        d=a;
        f=c;
    }
    else{
        max=c;
        d=a;
        f=b;
    }
    if(max*max==(d*d)+(f*f)){
        return true;
    }
    return false;
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"yes";
    }
        else
        {cout<<"no";
    }
    return 0;
}
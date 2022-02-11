#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
//..............(A*B)%m=1.............find b;
#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

// ax+by=gcd(a,b);
struct triplet{
    int x,y,gcd;
};
triplet extec(int a,int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;
        return ans;
    }

        triplet smallans=extec(b,a%b);
        triplet ans;
        ans.x=smallans.y;
        ans.gcd=smallans.gcd;
        ans.y=smallans.x-(a/b)*smallans.y;
        return ans;
    
}

int mim(int a,int m){
    triplet test=extec(a,m);
    return test.x;
}

int main(){
    int a,m;
    cin>>a>>m;
    cout<<mim(a,m);


    return 0;
}
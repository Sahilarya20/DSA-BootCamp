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

// ax+by=gcd(a,b);
//ax+0=gcd(a)=a;

struct triplet{
    int x;
    int y;
    int gcd;
};

triplet extGcd(int a,int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.y=0;
        ans.gcd=a;   
        return ans;
        }

        triplet smallans=extGcd(b,a%b);
        triplet ans;
        ans.x=smallans.y;
        ans.gcd=smallans.gcd;
        ans.y=smallans.x-(a/b)*smallans.y;
        return ans;
}

int main(){

    int a,b;
    cin>>a>>b;
    triplet ans=extGcd(a,b);
    cout<<"GCD: "<<ans.gcd<<endl<<"X:  "<<ans.x<<endl<<"Y:   "<<ans.y;
    
    return 0;
}
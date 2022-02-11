#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;

 
#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
// since constraint of string is <=200 i.e dp of size 200+1
 int dp[201][201][201];

int lcs(int i,int j,int k, string &a,string&b,string &c){

    if (i >= a.size() or j >= b.size() or k>=c.size())
        return 0;
    
    if (dp[i][j][k] != -1)
    {
        return dp[i][j][k];
    }
    
    if(a[i]==b[j] and b[j]==c[k])
     dp[i][j][k]=1+lcs(i+1,j+1,k+1,a,b,c);

   else{
       int l=lcs(i+1,j,k,a,b,c);
    int m=lcs(i,j+1,k,a,b,c);
    int p=lcs(i,j,k+1,a,b,c);
     dp[i][j][k]= max({l,m,p});
   } 
    
    return dp[i][j][k];
    
   
}

int main(){
    string a,b,c;
    cin>>a>>b>>c;
  
    memset(dp,-1,sizeof(dp));
    // ghqwng
    // sjnsdgh
    // cpgmah
    cout<<lcs(0,0,0,a,b,c);
    return 0;
}
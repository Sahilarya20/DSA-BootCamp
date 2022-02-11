#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

// my explanation might be wrong:-euler theorem is that phi(n) for [1to n] ,
// total no, whose gcd is 1 i.e how many gcd with ans 1 present with values 1 to n included example (1,1) and(1,2)...(1,n);

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >
const int N=1e5+2;

int totient[N];

int main(){
    for(int i=0;i<N;i++)
    totient[i]=i;
    for(int i=2;i<N;i++){
        if(totient[i]==i){
            for(int j=2*i;j<N;j+=i){
                totient[j]*=i-1;
                totient[j]/=i;
                
            }
            totient[i]=i-1;
        }
    }
    for(int i=2;i<11;i++)
    {
        cout<<totient[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
        int t,x,k;
        long long int N;
        cin>>t;
        while(t--){
            cin>>N>>x>>k;
            int forw[N+1];
            int c=0,flag=0;
            for(int i=0;i<N+1;i+=k){
                forw[c++]=i;
            }
            c=0;
            int back[N+1];
            for(int i=N+1;i>=0;i-=k){
                back[c++]=i;
            }
            for(int i=0;i<N+1;i+=k){
                if(forw[i]==x)
                flag=1;
            }
            for(int i=N+1;i>=0;i-=k){
               if(back[i]==x)
               flag=1;
            }
            if(flag==1)
            cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
            
        }
    
    return 0;
}
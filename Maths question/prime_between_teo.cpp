#include<iostream>
#include<math.h>
using namespace std;
 bool prime(int a){
     for(int i=2;i<=sqrt(a);i++){
         if(a%i==0){
             
             return 0;
         }
         
     }
     return 1;
 }
 int main(){
     int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<endl;
        }
        
    }
    return 0;
 }
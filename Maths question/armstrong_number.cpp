#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int i,n;
    cin>>n;
    int s=0;
    int originaln=n;
    while(n>0){
        int ld=n%10;
        s=s+pow(ld,3);
        n=n/10;
        

    }
    if(s==originaln){
        cout<<"armstrong";
    }
    else{
        cout<<"no";
    }
   
    
    return 0;

}

#include<iostream>
using namespace std;
int main(){
    
    int n,i,j;
    cout<<"Enter the butterfly height";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int sahil=2*n-2*i;
        for(j=1;j<=sahil;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int sahil=2*n-2*i;
        for(j=1;j<=sahil;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    

    
    return 0;

}

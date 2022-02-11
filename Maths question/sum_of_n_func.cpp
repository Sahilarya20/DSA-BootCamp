
#include<iostream>
using namespace std;
int isum(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
    }
    
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    cout<<isum(n);
    return 0;

}
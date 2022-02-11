  #include<iostream>
  #include<cmath>
using namespace std;
int main()
{   int i,n;
    int s=0;
    cin>>n;
    for(i=2;i<n/2;i++){
        if(n%i==0){
            cout<<"non prime"<<"\n";
            s=1;
            break;
        }
        
    }
    
    
    return 0;

}
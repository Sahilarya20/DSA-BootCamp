#include<iostream>
using namespace std;
//complexity=O(logn)
int main()
{ 
      int n;
        cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,e=n;
    int key;
    cout<<"enter the no. you want to find";
    cin>>key;
    
    while(s<=e){
        int mid=(s+e)/2;
      
        if(a[mid]==key){
            cout<<"found at:-"<<mid+1;
            break;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
        s=mid+1;
        }
    }
 
    return 0;
}

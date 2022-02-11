#include<iostream>
using namespace std;

int smallestsubarraysize(int arr[],int n,int x){
    int sum=0;
    int minLength=n+1;
    int start=0,end=0;
    while(end<n){
        while(sum<=x &&end<n){
            sum+=arr[end++];

        }

        while(sum>x &&start<n){
              if(end-start<minLength){
                  minLength=end-start;
              }
              sum-=arr[start++];
        }
    }
    return minLength;

}

int main(){
    int arr[]={2,3,1,1,1,1,1};
    int x=5;
    int n=7;
    cout<<smallestsubarraysize(arr,n,x);

    return 0;
}
#include<iostream>
using namespace std;


int peakElement(int arr[],int low,int high,int n){
    int mid=low+(high-low)/2;
    if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 ||  arr[mid]>=arr[mid+1])){
        return arr[mid];
    }
    else if(mid>0 && arr[mid-1]>arr[mid]){
        return peakElement(arr,low,mid-1,n);
    }
    else
    {
        return peakElement(arr,mid+1,high,n);
    }


}
int main(){
    int arr[]={1,2,1,3,5,6,4};
    int n=8;
    cout<<peakElement(arr,0,n-1,n);

    return 0;
}
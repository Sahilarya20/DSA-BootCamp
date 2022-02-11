// https://www.youtube.com/watch?v=xP_aCKJtFPg&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=119
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

    bool isFeasible(int mid,int arr[],int n,int k){
        int pos=arr[0];
        int element=1;
        for(int i=1;i<n;i++){
            if(arr[i]-pos>=mid){
                pos=arr[i];
                element++;
                if(element==k){
                    return true;
                }
            }
        }
        return false;
    }   

    int largestDistMinimum(int arr[],int n,int k){
        sort(arr,arr+n);
        int result=INT_MIN;
        int left=arr[0],right=arr[n-1];
        while(left<right){
            int mid=(left+right)/2;
            if(isFeasible(mid,arr,n,k)){
                result=max(result,mid);
                left=mid+1;
            }
           else{
                right=mid;
           }

        }
        return result;
    }

int main(){
    int arr[]={1, 2, 8, 4, 9};
    int k=3,n=5;
    cout<<"Largest minimum distance:- "<<largestDistMinimum(arr,n,k);
    
    return 0;
}

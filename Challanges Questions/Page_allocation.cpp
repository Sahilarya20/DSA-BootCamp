#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int n,int m, int min){
    int studentreq=1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum+arr[i]>min){
            studentreq++;
            sum=arr[i];
            if(studentreq>m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}   

int pageAllocation(int arr[],int n,int m){
    if(n<m){
        return -1;
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int left=arr[0];
    int right=sum;
    int ans=INT_MAX;
    while(left<=right){
    int mid=(left+right)/2;
        if(isPossible(arr,n,m,mid)){
           ans=mid;
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}

int main(){
      int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof arr / sizeof arr[0];
    int m = 5; //No. of students
 
    cout << "Minimum number of pages = " << pageAllocation(arr, n, m) << endl;
    return 0;
}
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int noOfPainters(int boards[],int n,int maxlength){
    int total=0;
    int numofpainters=1;
    for(int i=0;i<n;i++){
        total+=boards[i];
        if(total>maxlength){
            total=boards[i];
            numofpainters++;
        }
    }
    return numofpainters;
}

int paintersPartition(int boards[],int n,int m){
    int lo=INT_MIN;
    int hi=0;
    for(int i=0;i<n;i++){
        lo=max(lo,boards[i]);
        hi+=boards[i];
    }
    int minTime=INT_MAX;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        int paintersCount=noOfPainters(boards,n,mid);
        if(paintersCount>m){
            lo=mid+1;
        }
        else{
            minTime=mid;
            hi=mid-1;
        }
    }
    return minTime;
    
}

int main(){
    
      int arr[] = { 10, 20, 60, 50, 30, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << paintersPartition(arr, n, k) << endl;

    return 0;
}
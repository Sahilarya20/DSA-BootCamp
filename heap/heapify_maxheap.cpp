
#include<iostream>
#include<vector>
using namespace std;


void heapify(vector<int> &arr, int n, int i){
    int maxIdx = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<n && arr[l] > arr[maxIdx]){
        maxIdx = l;
    }
    if(r<n && arr[r] > arr[maxIdx]){
        maxIdx = r;
    }
    if(maxIdx != i){
        swap(arr[i], arr[maxIdx]);

        heapify(arr, n, maxIdx);
    }

     
}



void heapSort(vector<int> &arr){
    int n = arr.size();
    
    for(int i=n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }

    for(int i=n-1; i>0; i--){
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }

}



int main(){         
    int n;
    cin>>n;
    
    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    heapSort(arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
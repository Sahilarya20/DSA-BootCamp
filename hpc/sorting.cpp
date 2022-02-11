#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

// Selection Sorting
//Time Complexity-O(n^2)
int main(){
      int n;
      cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        	if(a[j]<a[i]){
			
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
        }
    }
    cout<<"Array after Sorting: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
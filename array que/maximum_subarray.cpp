#include<iostream>
#include<climits>
using namespace std;

int main()
{	 int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int maxsum=INT_MIN; 
	for(int i=0;i<n;i++){
		{for(int j=i;j<n;j++){
			int s=0;
			for(int k=i;k<=j;k++){
				s=s+a[k];
				
			}
			maxsum=max(maxsum,s); 
		}  
		}
	}
	cout<<maxsum;
 	return 0;
}



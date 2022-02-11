
#include<iostream>
using namespace std;
int main()
{	int n;
		cin>>n;
		int s;
	cin>>s;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int en=-1,st=-1,i=0,j=0;
	int sum=0;
	for(j=0;j<n&&sum+a[j]<=s;j++) {
		sum=sum+a[j];
		
	}
	if(sum==s){
		cout<<i+1<<"to"<<j<<endl;
		return 0;
	}
	while(j<n){
		sum+=a[j];
		while(sum>s){
			sum=sum-a[i];
			i++;
		}
		if(sum==s){
			st=i+1;
			en=j+1;
			break;
		}
		j++;
		
	}	
	
	cout<<st<<"to"<<en<<endl;

 	return 0;
}



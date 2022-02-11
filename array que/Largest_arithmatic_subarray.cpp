#include<iostream>
using namespace std;
int main()
{	int n,i;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int pd=a[i] - a[i-1];
	int current=2;
	int j=2;
	int ans=0;
	while(j<n){
		if(pd==a[j]-a[j-1]){
			current++;
		}
		else{
			pd=a[j]-a[j-1];
			current=2;
		}
		ans=max(ans,current);
		j++;
	}
	cout<<ans<<endl;
 	return 0;
}



#include<iostream>
using namespace std;
int nfib(int n){
	if(n==0||n==1){
		return n;
	}
	return nfib(n-1)+nfib(n-2);
}
int main()
{	int n;
cin>>n;
cout<<nfib(n);
 	return 0;
}



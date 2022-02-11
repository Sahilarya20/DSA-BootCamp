#include<iostream>
#include<string>
using namespace std;
int pairfrnd(int n){
	if(n==0||n==1||n==2){
		return n;
	}
	return pairfrnd(n-1)+pairfrnd(n-2)*(n-1);
}
int main()
{	cout<<pairfrnd(4);
 	return 0;
}



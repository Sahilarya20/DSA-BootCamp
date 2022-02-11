#include<iostream>
using namespace std;
bool sorted(int a[],int n){

	if(n==1){
		return 1;
	}

	bool restarray=sorted(a+1,n-1);
	return(a[0]<a[1]&&restarray);
}
int main()
{	int a[]={1,2,3,4,5};
cout<<sorted(a,5);
return 0;
}



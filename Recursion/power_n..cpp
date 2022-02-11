#include<iostream>
using namespace std;
int powr(int n,int p){
	if(p==0){
		return 1;
	}
	int ppowr=powr(n,p-1 );
	return n*ppowr;
}
int main()
{	int n,p;
cin>>n>>p;
cout<<powr(n,p);
 	return 0;
}



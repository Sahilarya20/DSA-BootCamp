#include<iostream>
using namespace std;
int getbit(int n,int pos){
	int p=((n&(1<<pos))!=0);  
	return p;
}
int main()

{	cout<<getbit(5,2);
 	return 0;
}

 

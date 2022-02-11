#include<iostream>
using namespace std;
int clearbit(int n,int pos){
	int mask=~(1<<pos);
	return ( n&mask);
}
int main()
{	cout<<clearbit(7,2 );  
 	return 0;
}

  

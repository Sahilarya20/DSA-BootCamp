#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int n,ld;
	
	for(int i=1;i<=T;i++){
		cin>>n;
		int sum=0;
	    while(n>0){
			
	        ld=n%10;
	        sum=sum+ld;
	        n=n/10;
			
	       }
		    cout<<sum<<endl;
	}
	    
	
	   
	return 0;
}
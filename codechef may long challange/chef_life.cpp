#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int A,N,d,x,y,z;
	
	while(t--){
	    cin>>A>>N>>d>>x>>y>>z;
	    if(A>0&&A>=18 &&x>0){
	        if(d<=10)
	            cout<<"yes\n";
	       else
	        cout<<"no\n";
	    }
	    if(A>19&&A>=50 &&y>0){
	        if(d<=14) cout<<"yes\n";
	        else cout<<"no\n";
	    }
	    if(A>=51 &&z>0){
	        if(d<=21) cout<<"yes\n";
	        else cout<<"no\n";
	    }
	}
	return 0;
}


#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	int p=0;
	cin>>t;

	while(t--){
	    string a;
	    int n;
	    cin>>n>>a;
	    int x=0,y=1;
	    for(int i=0;i<n;i++){
	        if(a[i]==0)
	            x++;
	        
	        else
	            y++;
	        
	        if(y>=x){
	            p=1;
	            break;
	        }
	    }
	    if(p==0)
	        cout<<"no"<<endl;
	    
	    else
	        cout<<"yes"<<endl;
	    
	}
	
	return 0;
}


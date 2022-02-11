#include<iostream>
#include<string>
using namespace std;
void changepi(string p){		
	if(p.length()==0){
		return;
	}
	if(p[0]=='p'&&p[1]=='i'){
		cout<<"3.14";
		changepi(p.substr(2));
	}
	else{
		cout<<p[0];
		changepi(p.substr(1));
		
	}
	
}

int main()
{	changepi("sdfpisdfsadfpisdfpi");
 	return 0;
}



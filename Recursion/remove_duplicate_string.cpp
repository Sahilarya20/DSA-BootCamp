#include<iostream>
#include<string>
using namespace std;
string remdup(string s){
	if(s.length()==0){
		return " ";
	}
	char c=s[0];
	string ans=remdup(s.substr(1));
	
	if(c==ans[0]){
		return ans;
	}
	else 
	return c+ans;
}
int main()
{	cout<<remdup("aassssdfffff");
 	return 0;
}



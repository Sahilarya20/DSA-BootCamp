#include<iostream>
#include<string>
using namespace std;
string moveallx(string s){
	if(s.length()==0){
		return "";
	}
	char c=s[0];
	string ans=moveallx(s.substr(1));
	
	if(c=='x'){
		return ans+c;
	}
	else 
	return c+ans;
}
int main()
{	cout<<moveallx("sadasxasxasxasxxxx");
 	return 0;
}



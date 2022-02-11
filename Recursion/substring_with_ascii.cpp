#include<iostream>
#include<string>
using namespace std;
void subst(string s,string p){
	if(s.length()==0){
		cout<<p<<endl;
		return;
		
	}
	char ch=s[0];
	int code=ch;
	
	string d=s.substr(1);
	subst(d,p);
	subst(d,p+ch);
	subst(d,p+ to_string(code));
	
}
int main()
{	subst("AB","");
 	return 0;
}



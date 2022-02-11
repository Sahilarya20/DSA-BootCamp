#include<iostream>
#include<string>
using namespace std;
void subst(string s,string p){
	if(s.length()==0){
		cout<<p<<endl;
		return;
		
	}
	char ch=s[0];
	string d=s.substr(1);
	subst(d,p);
	subst(d,p+ch);
	
}
int main()
{	subst("ABCD","");
 	return 0;
}



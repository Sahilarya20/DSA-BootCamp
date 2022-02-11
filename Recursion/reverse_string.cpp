#include<iostream>
#include<string>
using namespace std;
void reverse(string a){
	if(a.length()==0){
		return;
	}
	string p=a.substr(1);
	reverse(p);
	cout<<a[0];
}
int main()
{	reverse("sahil");
 	return 0;
}



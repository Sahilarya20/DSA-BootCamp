#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{	string a="314234";
  sort(a.begin(),a.end(),greater<int>());
  	cout<<a;
 	return 0;
}



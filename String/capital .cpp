#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{	string a="asfsdfasmknlonovlmnsdovdfsadf";
	for(int i=0;i<a.length();i++){
		if(a[i]>='a'&&a[i]<='z'){
			a[i]=a[i]-32;
		}
	}
	cout<<a;
//	/sorting
	sort(a.begin(),a.end());
	cout<<endl<<a;
transform(a.begin(),a.end(),a.begin(), ::toupper);
cout<<a;
 	return 0;
}

    

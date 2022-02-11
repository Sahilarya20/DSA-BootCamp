#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{	string a="knkadhiwncnle";
	int s[26];
	for(int i=0;i<26;i++ ){
		s[i]=0;
	}
	for(int i=0;i<a.length();i++){
	
		s[a[i]-'a']++; 
		
	}
	char ans='a';
	int maxa=0;
	for(int i=0;i<26;i++ ){
		if(s[i]>maxa);{
		maxa=s[i];
		ans=i+'a';
		}
		  
	}
	cout<<maxa<<" "<<ans;
 	return 0;
}

   

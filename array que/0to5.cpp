#include<iostream>
#include<string>
using namespace std;
int convertfive(int n){
    
    
     string a=to_string(n);
     for(int i=1;i<=a.size();i++){
         if(a[i]=='0'){
             a[i]='5';
         }
     }
    int p=stoi(a);
      return p;
    
}
int main()
{	int n;
cin>>n;
 cout<<convertfive(n);

 	return 0;
}



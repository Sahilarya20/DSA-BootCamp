#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int xyz(int n)
{
	// Base Cases
	if (n == 1)
		return 1;
	if (n <= 0)
		return 0;

	if (n % 2 == 0) {
		return (xyz(n / 2));
	}
	if (n % 3 == 0) {
		return (xyz(n / 3));
	}
	if (n % 5 == 0) {
		return (xyz(n / 5));
	}

	return 0;
}

int main(){
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(xyz(n)==1)cout<<"yes";
    else cout<<"no";
    return 0;
}
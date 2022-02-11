#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<stdio.h>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define lp(i,a,b) for(int i=a;i<b;i++)
#define pii pair<int,int>
#define map map<int,vector<int> >

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')c++;
    }
    cout<<"Total spaces: "<<c;
    return 0;
}
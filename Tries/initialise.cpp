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

class Trienode{
    public:
    char data;
    Trienode ** children;
    bool end;

    Trienode( char data){
        // this is used to get "data "of  this class not of the given by user in above line
        this->data=data;
        children= new Trienode *[26];
        for(int i=0;i<26;i++)children[i]=NULL;   //initially there is no element or alphabets in the children array ....as pointer
        end=false;
    }
};
class trie{
    Trienode* root;
    public:
   trie(){
       root=new Trienode('\0');
   }
};


int main(){
    
    return 0;
}
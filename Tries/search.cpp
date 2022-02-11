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
   
        this->data=data;
        children= new Trienode *[26];
        for(int i=0;i<26;i++)children[i]=NULL;   
        end=false;
    }
};

class trie{ 
    Trienode* root;
    public:
    trie(){
       root=new Trienode('\0');

    }
   bool search(Trienode* root,string word){

    if(word.length()==0){
         root->end=true;
        return true;
    }
        int index=word[0]-'a';
        Trienode *child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
           return false;
        }
        return search(child,word.substr(1));
    }
    bool search(string Word){
       return  search(root,Word);
    }
};




int main(){
    
    return 0;

}
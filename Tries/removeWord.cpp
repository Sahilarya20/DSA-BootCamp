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
   void removeWord(Trienode* root,string word){

    if(word.length()==0){
         root->end=false;
        return;
    }
        int index=word[0]-'a';
        Trienode *child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
           return;
        }
     removeWord(child,word.substr(1));

    //......Remove child is it is Useless:-if end =false;no further child or null in its children array;
        if(child->end==false){
            lp(i,0,26){
                if(child->children[i]!=NULL)return;
            }
            delete child;
            root->children[index]=NULL;
        }
    }
    void removeWord(string Word){
       removeWord(root,Word);
    }
};




int main(){
    
    return 0;

}
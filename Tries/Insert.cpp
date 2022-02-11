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
   void insert(Trienode* root,string word){

    if(word.length()==0){
         root->end=true;
        return;
    }
        int index=word[0]-'a';
        Trienode *child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            child= new Trienode(word[0]);
            root->children[index]=child;
        }
        insert(child,word.substr(1));
    }
    void insert(string Word){
        insert(root,Word);
    }

    // .................................SEARCH FUNCTION TO CHECK ANS
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


      // .................................remove FUNCTION TO CHECK ANS
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
    trie obj1;
    obj1.insert("sahil");
    obj1.insert("arya");
    obj1.insert("relief");

    if(obj1.search("relief"))cout<<"yes"<<endl;
    else cout<<"NO"<<endl;

    obj1.removeWord("relief");
    
    if(obj1.search("relief"))cout<<"yes"<<endl;
    else cout<<"NO"<<endl;
    
    
    return 0;

}
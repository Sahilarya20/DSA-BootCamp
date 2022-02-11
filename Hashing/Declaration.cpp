#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int main(){
    
    // map<int,int> mp;
    // mp[8]=5;
    // cout<<mp[8];

    unordered_map<string,int> ourmap;

    // // INSERT
    pair<string,int> p;
    p.first="abc";
    p.second=1;
    ourmap.insert(p);
    ourmap["def"]=1;

    // // SEARCH
    cout<<ourmap["abc"]<<endl;
    cout<<ourmap.at("def")<<endl;
    cout<<"size: "<<ourmap.size()<<endl;
    // cout<<ourmap.at("gef")<<endl;
    cout<<ourmap["ghi"]<<endl;
    if(ourmap.count("ghi")>0)
    cout<<"ghi present"<<endl;
    cout<<"size: "<<ourmap.size()<<endl;

    // // ERASE
    ourmap.erase("ghi");
    cout<<"size: "<<ourmap.size();

    
    return 0;
}
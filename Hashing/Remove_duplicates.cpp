#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

vector<int> removeduplicates(int a[],int size){
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i])){
            continue;
        }
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
    return output;
  
}
int main(){
    
   int a[]={1,1,2};
   int size=3;
   vector<int> output=removeduplicates(a,size);
   for(int i=0;i<output.size();i++){
       cout<<output[i]<<" ";
   }

    
    return 0;
}
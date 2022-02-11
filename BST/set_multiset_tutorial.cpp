#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    
    // .............................................Set
    // complexity:-
    // INSERTION=DELETION=LOWER/UPPER BOUND=O(N)

    // set<int> s;
    // For bigger to small
    // set<int,greater<int>> s;
    // s.insert(1);
    // s.insert(8);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);

    // for(auto i:s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // s.erase(3);
    // for(auto i:s){
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<s.size();


    // ...........................multiset
    // multiset<int>s;
    // s.insert(1);
    // s.insert(3);
    // s.insert(3);
    // s.insert(3);
    // s.insert(5);
    //  for(auto i:s){
    //     cout<<i<<" ";
    // }
    // // s.erase(3);
    // s.erase(s.find(3));
    // s.erase(s.upper_bound(3));   
    // cout<<endl;
    //  for(auto i:s){
    //     cout<<i<<" ";
    // }

    // ...........................Unordered_Set

    // no duplicates
    // Time complexity:-
    // Insertion=Deletion=Average=O(1),Worst=O(N)

    unordered_set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
     for(auto i:s){
        cout<<i<<" ";
    }
    s.erase(2);
    cout<<endl;
     for(auto i:s){
        cout<<i<<" ";
    }
  
    return 0;
}
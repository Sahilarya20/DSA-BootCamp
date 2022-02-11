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

int main(){
    int no_homes;
    cout<<"enter number of homes: ";
    cin>>no_homes;
    int max_candies;
    cout<<"Enter the total number of candies: ";
    cin>>max_candies;
    int homes[no_homes];
    lp(i,0,no_homes){
        cin>>homes[i];
    }
    int s,e;
    int count=0;
   for (int i = 0; i < no_homes; i++)
  {
    int sum = 0;
    for (int j = i; j < no_homes; j++)
    {
      sum += homes[j];
      if (sum <=max_candies)
        count++;
        s=i;
        e=j;
    }
  }
    cout<<s<<" "<<e<<" "<<count;
    return 0;
}
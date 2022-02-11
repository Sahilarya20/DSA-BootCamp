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
// bool comp(vector<int> p,vector<int> q){
//     return p[1]>q[1];
// }
int main(){
    
    int n;
    cin>>n;
    vector<vector<int> >a;
    for(int i=0;i<n;i++){
        int start;
        int end;
        cin>>start>>end;
        a.push_back({start,end});
    }
    // sort(a.begin(),a.end(),comp);
    // sort(a.begin(),a.end(), [](vector<int> p,vector<int> q){
    //     return p[1]<q[1];
        
    // });
    // sort(a.begin(),a.end());
    int take=1;
    int end=a[0][1];
    for(int i=1;i<n;i++){
        if(a[i][0]>=end){
            take++;
            end=a[i][1];
        }
    }
    cout<<take<<endl;
    cout<<endl;

//      for (vector<int> vect1D : a)
//     {
//         for (int x : vect1D)
//         {
//             cout << x << " ";
//         }   
//         cout << endl;
//     }
//     return 0;
}

// .............................................method 2

// bool cmp(pair<int,int>a ,pair<int ,int> b)
// {
//     return a.second <b.second ;
// }

// int main()
// {
//     int n;
//     int start[n] ,finish[n];

//     for(int i=0 ; i<n ; i++)
//     {
//         cin>>start[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>finish[i];
//     }

//     vector<pair<int,int> > v;

//     for(int i=0 ;i<n;i++)
//     {
//         v.push_back({start[i],finish[i]});
//     }

//     sort(v.begin(), v.end(),cmp);

//     int cnt=0 , last=0 ;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i].first >= last)
//         {
//             cnt++;
//             last=v[i].second  ;
//         }
//     }
//     cout<<cnt ;
//     return 0;

// }
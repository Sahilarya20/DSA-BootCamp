
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
        int t;cin>>t;
        while(t--){
            int x,y;
            cin>>x>>y;
            int c=0;
            while(x<y){
                x+=2;
                c++;
                if(x>y){
                x-=1;
                c++;
            }
            }
        
            cout<<c<<endl;;
        }
        return 0;
    }
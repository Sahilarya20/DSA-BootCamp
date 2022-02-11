#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cin>>r>>c;
    for(i=0;i<r;i++)
    {
            for(j=0;j<c;j++)
            {if(i=1 ||i=r||j=1||j=c)
                cout<<"*";
            }
            else
            cout<<" ";
    }
    cout<<"\n";
    return 0;
}
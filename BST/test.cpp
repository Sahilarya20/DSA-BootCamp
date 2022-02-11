#include<iostream>
#include<string.h>
using namespace std;

class student 
{
public:
    char n[20];
    int r;
    float m;
};
student ;
int main(){
    student st;
     int total=0;
        cout<<"enter roll no"<<endl;
        cin>>st.r;
    for(int i=0;i<3;i++)
    {   
        cout<<"enter name :"<<endl;
        cin.getline(st.n,100);
        cout<<"enter marks:"<<endl;
        cin>>st.m;
        total=total+st.m;
        
    }
    cout<<total;
    return 0;
}
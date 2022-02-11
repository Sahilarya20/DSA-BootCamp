 #include<iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int num;
     cout<<"enter the no. you want";
     cin>>num;
     int flag=0;
     for(int i=0;i<n;i++){
         if(a[i]==num){
             flag=1;
             cout<<i+1;
             break;
         }
         
     }
     if (flag==0){
         cout<<"not found";
     }
     
     return 0;

 }
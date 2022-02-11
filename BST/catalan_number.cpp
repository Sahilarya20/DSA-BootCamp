// https://www.youtube.com/watch?v=1ZAotQGnbi4&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=113
 #include<iostream>
 using namespace std;
 
    int catalan(int n){
        if(n<=1){
            return 1;
        }
        int res=0;
        for(int i=0;i<=n-1;i++){
            res=res+catalan(i)*catalan(n-i-1);

        }
        return res;

    }

 int main(){
     for(int i=0;i<10;i++){
         cout<<catalan(i)<<" ";
     }cout<<endl;
     return 0;
 }
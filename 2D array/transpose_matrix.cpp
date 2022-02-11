#include<iostream>
using namespace std;
int main()
{
	int R,C;
	cin>>R>>C;
	int a[R][C];
	cout<<"enter elements\n";
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
	}
	cout<<"transpose is:-"<<endl;
	for(int i=0;i<R;i++){
		for(int j=i;j<C;j++){
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
 	return 0;
}




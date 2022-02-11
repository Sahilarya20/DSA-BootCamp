#include<iostream>
using namespace std;
int main()
{	int R,C,target;
	cin>>R>>C>>target;
	int a[R][C];
	cout<<"enter elements\n";
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>a[i][j];
		}
	} 
	int x=0,y=C-1;
	int flag=0;
	while(x<R&&y>=0){
		if(a[x][y]==target){
			flag=1;
			break;
	}
		  else if(a[x][y]>target){
			y--;
		}	
		else
		x++;
	
}
	if(flag==1){
		cout<<"found";
		
	}
	else{
	
	cout<<"not found";
}
 	return 0;
}



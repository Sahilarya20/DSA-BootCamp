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
#define N 4

void multiply(int mat1[][N],
              int mat2[][N],
              int res[][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = 0;
            for (int k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}



int main(){
    
      int i, j;
      //We can change dimensions of the square matrix in macros by changing  value of N
    int res[N][N]; // To store result
    int mat1[N][N] = { { 2, 1, 6, 1 },
                       { 2, 5, 2, 5 },
                       { 2, 3, 5, 3 },
                       { 4, 3, 4, 4 } };
 
    int mat2[N][N] = { { 9, 1, 8, 1 },
                       { 2, 1, 2, 6 },
                       { 3, 0, 3, 3 },
                       { 3, 4, 3, 4 } };
 
    multiply(mat1, mat2, res);
 
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
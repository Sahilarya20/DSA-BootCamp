#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define map map<int, vector<int>>

void addMatrices(int A[][4], int B[][4], int C[][4])
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            C[i][j] = A[i][j] + B[i][j];
}
int main()
{
    int A[4][4] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};

    int B[4][4] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};

    int C[4][4];
    addMatrices(A,B,C);
    cout<<"Output\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
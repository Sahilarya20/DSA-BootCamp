#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define map map<int, vector<int>>
//................................mamoization form start of the strings i=0,j=0

int lcs(int i, int j, string &a, string &b, vector<vi> &dp)
{
    if (i >= a.size() or j >= b.size())
        return 0;

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if (a[i] == b[j])
    {
        dp[i][j] = 1 + lcs(i + 1, j + 1, a, b, dp); 
    }
    else
    {
        int left = lcs(i + 1, j, a, b, dp);
        int right = lcs(i, j + 1, a, b, dp);
        dp[i][j] = max(left, right);
    }
    return dp[i][j];
}

int main()
{
    string a, b;
    cin >> a >> b;
    // asfbjashfjasbfkljashjfasbjkczxghjfbasljkchvzkbfnka
    // dasdvksaabfjzxhvibnskjcnzkxvnskbvzbsvkznvbkjzhsvk
    int n = a.size();
    int m = b.size();
    vector<vi> dp(n + 1, vi(m + 1, -1));
    cout << lcs(0, 0, a, b, dp);
    cout << endl;
    //..................TABULATION;-from end of string n-1 and m-1;

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << (dp[n][m]);
    return 0;
}
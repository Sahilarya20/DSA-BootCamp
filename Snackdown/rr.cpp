#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define map map<int, vector<int>>

int achhaji(int p)
{
    p = p - 1;
    while ((p & p - 1) != 0)
    {
        p = p & p - 1;
    }
    return p << 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        vi b(n);
        int che;
        int i, j = 0, min = 0, k = 0, c = 1, s = 0, ans = 0, m = 0;
        lp(i, 0, n)
        {
            cin >> a[i];
            b[i] = a[i];
            s += a[i];
        }
        sort(b.begin(), b.end());
        m = achhaji(s);
        cout<<"m="<<m;
        min = b[0];
        s -= min;
        ans = s;
        c = (m - s) / min;
        if (c == 1)
            cout << "0\n";
        else
        {
            cout << "1 " << endl;

            cout<< "1 " <<c << endl;
            auto it = find(a.begin(), a.end(), min);
            if (it != a.end())
            {

                int index = it - a.begin();
                cout << index << endl;
            }
        }
    }
    return 0;
}
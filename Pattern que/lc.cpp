#include <iostream>
using namespace std;

int main() 
{
    int n, h, x, count = 0;
    cin >> n >> h >> x;
    while(n--)
    {
        int t;
        cin >> t;
        if(h == x + t)
             count = 1;
    }
    if(count == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

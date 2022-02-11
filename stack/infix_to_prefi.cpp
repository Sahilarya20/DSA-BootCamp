#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;
// int prec(char c)
// {
//     if (c == '^')
//         return 3;
//     else if (c == '/' || c == '*')
//         return 2;
//     else if (c == '-' || c == '+')
//         return 1;
//     else
//         return -1;                           //for paranthesis
// }

// string infixtoprefic(string s)
// {
//     reverse(s.begin(), s.end());

//     stack<char> st;
//     string res;
//     for (int i =s.length();i>0;)
//     {
//         if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' || s[i] <= 'Z'))
//             res = res + s[i];
//         else if (s[i] == ')')
//             st.push(s[i]);
//         else if (s[i] == '(')
//         {
//             while (!st.empty() && st.top() == ')')
//             {
//                 res = res + st.top();
//                 st.pop();
//             }
//             if (!st.empty())
//             {
//                 st.pop();
//             }
//         }
//         else
//         {
//              while (!st.empty() && prec(st.top()) >= prec(s[i]))
//             {
//                 res = res + st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while (!st.empty())
//     {
//         res +=  st.top();
//         st.pop();
//     }
//     reverse(res.begin(), res.end());
//     return res;
// }

// int main()
// {
//     cout << infixtoprefic("(a-b/c)*(a/k-l)");
//     return 0;
// }
#include <iostream>
#include <stack>
using namespace std;

int precedance(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return -1;
}

string infixToprefix(string s)
{
    stack<char> st;
    string res;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res = s[i] + res;
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            while ((!st.empty()) && st.top() != ')')
            {
                res = st.top() + res;
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }   
        else
        {
            while ((!st.empty()) && (precedance(s[i]) <= precedance(st.top())))
            {
                res = st.top() + res;
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res = st.top() + res;
        st.pop();
    }
    return res;
}

int main()
{
    string s = "(a-b/c)*(a/k-l)";
    cout << infixToprefix(s);
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// a b
// n 3 - n can be 3,
// 1 (1,2)
// 2 (1 1)
// 3 (3 0)
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            swap(a, b);
        if (a > 2 * b)
        {
            cout << "NO ";
        }
        else if ((a + b) % 3 == 0)
        {
            cout << "YES ";
        }
        else
        {
            cout << "NO ";
        }
    }
}
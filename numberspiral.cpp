#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    ll res[t];
    for (ll i = 0; i < t; ++i)
    {
        ll x, y;
        cin >> y >> x;
        if (y > x)
        {
            if (y % 2 == 0)
            {
                res[i] = (y * y) - (x - 1);
            }
            else
            {
                res[i] = (y * y) - (2 * y - 1) + (x);
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                res[i] = (x * x) - (2 * x - 1) + (y);
            }
            else
            {
                res[i] = (x * x) - (y - 1);
            }
        }
    }
    for (int i = 0; i < t; ++i)
    {
        cout << res[i] << " ";
    }
}
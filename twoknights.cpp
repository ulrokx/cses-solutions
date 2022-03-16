#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // find the total number of placements then subtract number of 2*3 boards, each
    // which contain 2 possible placements where they hit eachother
    ll n;
    cin >> n;
    for (ll k = 1; k <= n; k++)
    {
        ll k2 = k*k;
        ll total = (k2 * (k2 - 1)) / 2;
        ll toSub = 4*(k-1)*(k-2);
        cout << total - toSub << "\n";
    }
}
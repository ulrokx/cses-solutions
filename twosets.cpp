#include <bits/stdc++.h>
#define ll long long
using namespace std;
// do two pointers at 1 and n, add until the current sum is greater than the target
// then see if we need to move a number of to fix the offset and we're done
// 1 2 3 4 5 6 7 8 9 10 11 - 66/2 = 33
// 1 11 2 10 3 9 = 36
// 4 8 5 7 6 = 30
// 1 2 3 4 5 6 7 8 9 10 11 12 = 78/2 = 39
// 1 12 2 11 3 10 = 39 - 39 = 0
// 4 9 5 8 6 7
int main()
{
    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    if (total % 2 == 1)
    {
        cout << "NO";
        return 0;
    }
    ll l = 1, r = n, target = total / 2;
    unordered_set<ll> list;
    ll sum = 0;
    while (sum < target)
    {
        sum += l + r;
        list.insert({l, r});
        l++;
        r--;
    }
    ll offset = sum - target;
    vector<ll> toRemove;
    for (unordered_set<ll>::iterator it = list.begin(); it != list.end();)
    {
        if (*it == offset)
        {
            it = list.erase(it);
        }
        else
        {
            it++;
        }
    }
    cout << "YES\n"
         << list.size() << "\n";
    for (ll v : list)
    {
        cout << v << " ";
    }
    cout << "\n"
         << n - list.size() << "\n";
    for (ll i = 1; i < n; i++)
    {
        if (list.find(i) == list.end())
        {
            cout << i << " ";
        }
    }
}
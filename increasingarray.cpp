#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll h, n, ans = 0;
    cin >> n >> h;
    for(int i = 1; i < n; ++i) {
        ll c;
        cin >> c;
        if(h > c) {
            ans += h - c;
        }
        else {
            h = max(h, c);
        }
    }
    cout << ans;

}
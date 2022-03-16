#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, s = 0;
    cin >> n;
    for(int i = 1; i < n; ++i) {
        int tmp;
        cin >> tmp;
        s += tmp;
    }
    cout << ((n+1) * n)/2 - s;
}
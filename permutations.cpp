#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int i = 2;
    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    while(i <= n) {
        cout << i << " ";
        i+= 2;
    }
    i = 1;
    while(i <= n) {
        cout << i << " ";
        i+= 2;
    }
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int s = 0, ans = 0;
    string str;
    cin >> str;
    char d = 'A';
    for(char ch: str) {
        if(ch != d) {
            d = ch;
            s = 1;
        } else {
            s++;
            ans = max(s, ans);
        }
    }
    cout << ans;
}
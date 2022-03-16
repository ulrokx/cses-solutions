#include <bits/stdc++.h>
#define ll long long
using namespace std;
// if a number has 10 as a factor, it has a trailing zero. 
// 10 has 5 and 2 as factors
// there is always a shortage of 5's, so let's count the 5s
// because of numbers like 25, there is an extra factor, so just keep finding these until
// they are not factors anymore.
int main() {
    int n, res = 0;
    cin >> n;
    for(int i = 5; n/i >= 1; i*=5) {
        res += n/i;
    }
    cout<< res;
}
#include <iostream>
#include <algorithm>

#define ll long long
using namespace std;
int t;
ll n, x;

void solve() {
    cin >> n >> x;
    ll a[n];
    ll s = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n);
    ll i = 0;
    long size = n;
    do {
        if (s / size >= x) {
            cout << size << "\n";
            return;
        }
        size--;
        s -= a[i];
        i++;
    } while (size > 0);
    cout << 0 << "\n";
}

int main() {
    cin >> t;
    while (t--) {
        solve();
    }
}
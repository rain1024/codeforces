#include <iostream>
#include <map>

#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    map<ll, pair<ll, ll>> a;
    ll x;
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        if (a.find(x) == a.end()) {
            a[x] = make_pair(i, n - i + 1);
        } else {
            a[x] = make_pair(a[x].first, n - i + 1);
        }
    }
    ll m;
    cin >> m; // read m
    ll s1 = 0, s2 = 0;
    ll b;
    while (m--) {
        cin >> b;
        s1 += a[b].first;
        s2 += a[b].second;
    }
    cout << s1 << " " << s2;
}
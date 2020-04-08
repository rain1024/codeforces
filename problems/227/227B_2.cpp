#include <iostream>
#include <map>

#define ll long long
using namespace std;
int n, m, x, a[100005];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x] = i;
    }
    cin >> m;
    ll s1 = 0, s2 = 0;
    while (m--) {
        cin >> x;
        s1 += a[x];
        s2 += n - a[x] + 1;
    }
    cout << s1 << " " << s2;
}
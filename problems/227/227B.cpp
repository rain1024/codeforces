#include <iostream>

using namespace std;

int n, m, x, a[100001];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        a[x] = i;
    }

    scanf("%d", &m);
    long long s1(0), s2(0);
    while (m--) {
        scanf("%d", &x);
        s1 += a[x];
        s2 += n - a[x] + 1;
    }
    cout << s1 << " " << s2;
}
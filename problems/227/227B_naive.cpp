#include <iostream>

using namespace std;

void solve(int *a, int n, int *b, int m) {
    int i;
    int s = 0;
    for (int j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            if (b[j] == a[i]) {
                s += (i + 1);
                break;
            }
        }
    }
    cout << s << " ";
    s = 0;
    int k;
    for (int j = 0; j < m; j++) {
        for (i = n - 1, k = 0; i >= 0; i--, k++) {
            if (b[j] == a[i]) {
                s += (k + 1);
                break;
            }
        }
    }
    cout << s;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m; // read m
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    solve(a, n, b, m);
}
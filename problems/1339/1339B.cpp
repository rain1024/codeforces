#include <bits/stdc++.h>

using namespace std;
int t;
int n;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a, a + n);
        int i, j;
        if (n % 2 == 0) {
            for (i = n / 2 - 1, j = n /2; (i >= 0) || (j < n); i--, j++) {
                printf("%d ", a[i]);
                printf("%d ", a[j]);
            }
        } else {
            printf("%d ", a[(n -1) / 2]);
            for (i = (n - 1)/ 2 - 1, j = (n - 1)/ 2 + 1; (i >= 0) || (j < n); i--, j++) {
                printf("%d ", a[j]);
                printf("%d ", a[i]);

            }
        }
        printf("\n");
    }
}
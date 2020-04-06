#include <iostream>
#include <set>

using namespace std;

int solve(int n, int x) {
    int i;
    int v = 0;
    int value;
    int MAX_N = 300;

    set<int, less<int>> a;
    a.insert(0);
    a.insert(MAX_N);
    for (i = 0; i < n; i++) {
        cin >> value;
        a.insert(value);
    }
    set<int, less<int>>::iterator itr = a.begin();
    int current, next;
    int d;
    while (x >= 0) {
        current = *itr;
        next = *(++itr);
        if(next == current + 1){
            v = next;
        } else {
            d = next - current - 1;
            if(x > d){
                x -= d;
                v = next;
            } else {
                if(x == d) {
                    v = current + x;
                    if(next - v == 1){
                        v = next;
                        x = 0;
                    }
                } else {
                    v = current + x;
                    break;
                }
            }

        }
    }
    cout << v << endl;
}

int main() {
    int t;
    cin >> t;
    int i;
    int n;
    int x;
    for (i = 0; i < t; i++) {
        cin >> n;
        cin >> x;
        cout << endl;
        solve(n, x);
    }
}
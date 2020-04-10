#include <iostream>

using namespace std;
int n, m, t, p, c;

void solve(){
    int n = 0;
    cin >> n;
    int pi = 0, ci = 0;
    while(n--){
        cin >> p >> c;
        if(c < ci){
            cout << "NO\n";
            while(n--){
                cin >> p >> c;
            }
            return;
        }
        if(c - ci > p - pi){
            cout << "NO\n";
            while(n--){
                cin >> p >> c;
            }
            return;
        }
        pi = p;
        ci = c;
    }
    cout << "YES\n";
    return;
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
}
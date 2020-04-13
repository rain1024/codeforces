/**
 *  author:  rain1024
 *  created: 13.04.2020 17:48   
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int value = 0;
        int mx = (int) -2e9;
        for(int i =0; i<n; i++){
            int a;
            cin >> a;
            mx = max(mx, a);
            value = max(value, mx - a);
        }
        long long res = 0;
        while((1LL << res) - 1 < value){
            ++res;
        }
        cout << res << "\n";
    }
    return 0;
}
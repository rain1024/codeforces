#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int b[n];
    int x = 0; // max_a
    int a = 0;
    for(int i = 0; i<n ; i++){
        cin >> b[i];
        x = max(x, a);
        a = b[i] + x;
        cout << a << " ";
    }
}
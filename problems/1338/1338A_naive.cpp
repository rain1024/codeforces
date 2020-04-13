#include <iostream>

using namespace std;
int t;
int n;
const int MAX_N = 100005;
int a[MAX_N];

int count_t(int d){
    int value = 0;
    int t = 0;
    while(value < d){
        value = 2 * value +1;
        ++t;
    }
    return t;
}
void solve(){
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max_d = 0;
    for(int i=1; i<n; i++){
        if(a[i] < a[i-1]){
            max_d = max(max_d, a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    };
    printf("%d\n", count_t(max_d));
}

int main() {
    scanf("%d", &t);
    while (t--) solve();
}
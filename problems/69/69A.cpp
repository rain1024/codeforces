#include <iostream>
using namespace std;

void solve(){

}
int main() {
   int n;
   int x, y, z;
   int sx = 0, sy = 0, sz = 0;
   cin >> n;
   for(int i = 0; i < n; i++){
       cin >> x;
       cin >> y;
       cin >> z;
       sx += x;
       sy += y;
       sz += z;
   }
   if(sx == 0 && sy == 0 && sz == 0){
       cout << "YES";
   } else {
       cout << "NO";
   }
}
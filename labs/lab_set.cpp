#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int, less<int>> a;
    a.insert(10);
    a.insert(50);
    a.insert(20);
    for(set<int, less<int>>:: iterator i = a.begin(); i != a.end(); ++i){
        cout << *i << " ";
    }
}

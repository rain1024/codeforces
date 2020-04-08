#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    m[1] = 2;
    m[2] = 3;
    int value = m[1];
    int value2 = m[4];
    cout << value;
}

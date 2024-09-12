#include <iostream>

using namespace std;


void aaa(int a, int b) {
    if (a > b) {
        a = a + 25;
        b = b * 2;
        cout << a << " " << b;
    }
    else {
        b = b + 25;
        a = a * 2;
        cout << a << " " << b;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    aaa(a, b);
    return 0;
}
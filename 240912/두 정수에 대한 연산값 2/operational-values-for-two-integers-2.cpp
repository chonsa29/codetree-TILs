#include <iostream>

using namespace std;

void print(int a, int b) {
    if (a > b) {
        b = b + 10;
        a = a * 2;
        cout << a << " " << b;
    }
    else {
        a = a + 10;
        b = b * 2;
        cout << a << " " << b;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    print(a, b);
    return 0;
}
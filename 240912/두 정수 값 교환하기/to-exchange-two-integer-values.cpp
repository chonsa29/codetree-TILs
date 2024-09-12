#include <iostream>

using namespace std;

void change(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;
}

int main() {
    int n, m;
    cin >> n >> m;

    change(n, m);

    return 0;
}
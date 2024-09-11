#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a,int b) {
    return a * b;
}

int dev(int a,int b) {
    return a / b;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char o;

    cin >> a >> o >> b;

    if (o == '+') {
        cout << a <<" " << o <<" "<< b << " = " << add(a, b);
    }

    else if (o == '-') {
        cout << a << " " << o << " "<< b << " = " << sub(a, b);
    }

    else if (o == '*') {
        cout << a << " " << o << " " << b << " = " << mul(a, b);
    }

    else if (o == '/') {
        cout << a << " " << o << " " << b << " = " << dev(a, b);
    }
    return 0;
}
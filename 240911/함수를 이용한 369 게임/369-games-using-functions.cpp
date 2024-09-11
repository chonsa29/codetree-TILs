#include <iostream>
using namespace std;

bool find(int a) {
    int one = a % 10; //1
    int ten = a / 10; //10
    int c = a % 100; //100
    int d = a / 100; //1000
    int e = a % 1000; //10000
    int f = a / 1000; //100000
    int g = a % 10000;
    int h = a / 10000;
    int i = a % 100000;
    if (one == 3 || one == 6 || one == 9) return true;
    else if (ten == 3 || ten == 6 || ten == 9) return true;
    else if (c == 3 || c == 6 || c == 9) return true;
    else if (d == 3 || d == 6 || d == 9) return true;
    else if (e == 3 || e == 6 || e == 9) return true;
    else if (f == 3 || f == 6 || f == 9) return true;
    else if (g == 3 || g == 6 || g == 9) return true;
    else if (h == 3 || h == 6 || h == 9) return true;
    else if (i == 3 || i == 6 || i == 9) return true;
    else return false;
}

bool mul(int a) {
    return a % 3 == 0;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a;i <= b;i++) {
        if (find(i) == 1 || mul(i) == 1) cnt++;
    }

    cout << cnt;
    return 0;
}
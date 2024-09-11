#include <iostream>
using namespace std;

int min(int a, int b, int c) {
    int min = 101;
    if (a < b && a < c) min = a;
    else if (b < a && b < c) min = b;
    else min = c;
    return min;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    cout << min(a, b, c);
    return 0;
}
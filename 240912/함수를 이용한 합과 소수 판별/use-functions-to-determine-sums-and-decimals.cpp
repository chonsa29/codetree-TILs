#include <iostream>
using namespace std;

bool prime(int a) {
    int cnt = 0;
    if (a == 1) return 0;
    else {
        for (int i = 2;i < a;i++) {
            if (a % i == 0) cnt++;
        }
        if (cnt == 0) return 1;
        else return 0;
    }
}

bool even(int a) {
    int sum = 0;
    
    while (a  >0) {
        sum += a % 10;
        a = a / 10;
    }

    if (sum % 2 == 0) return 1;
    else return 0;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = a;i <= b;i++) {
        if (prime(i) == 1 && even(i) == 1) cnt++;
    }
    cout << cnt;
    return 0;
}
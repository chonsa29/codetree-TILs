#include <iostream>

using namespace std;

int change(int a) {
    if (a % 2 == 0) a = a / 2;
    return a;
}

int main() {
    int N;
    int arr[100];
    cin >> N;

    for (int i = 0;i < N;i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0;i < N;i++) {
        cout << change(arr[i]) << " ";
    }

    return 0;
}
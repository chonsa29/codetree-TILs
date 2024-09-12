#include <iostream>
#include <vector>

using namespace std;
int arr[100];



int add(int a) {
    int sum = 0;
    while (a != 1) {
        sum = sum + arr[a-1];
        if (a % 2 == 0) a = a / 2;
        else a = a + 1;
    }
    sum = sum + arr[0];
    return sum;
}


int main() {
    int n, m;
    cin >> n >> m;

    
    for (int i = 0;i < n;i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    cout << add(m);

    return 0;
}
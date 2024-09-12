#include <iostream>
#include <vector>

using namespace std;
int A[100];



int add(int a, int b) {
    int sum = 0;
    for (int i = a - 1;i < b;i++) {
        sum = A[i] + sum;
    }
    return sum;
}


int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0;i < n;i++) {
        int num;
        cin >> num;
        A[i] = num;
    }
    
    for (int i = 0;i < m;i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << add(a1, a2) <<"\n";
    }
    return 0;
}
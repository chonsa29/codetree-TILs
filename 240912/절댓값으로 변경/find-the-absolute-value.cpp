#include <iostream>

using namespace std;


int absolute(int a) {
    if (a < 0) a = -a;
   
    return a;
}

int main() {
    int N;
    cin >> N;
    int arr[50];
    
    for (int i = 0;i < N;i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0;i < N;i++) {
        cout << absolute(arr[i]) << " ";
    }
    return 0;
}
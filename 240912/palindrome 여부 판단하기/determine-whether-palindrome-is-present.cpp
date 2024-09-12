#include <iostream>

using namespace std;

string p(string s) {
    string s2;
    int size = s.size();
   
    for (int i = 0;i < size;i++) {
        s2.push_back(s.back());
        s.pop_back();       
    }
    return s2;
}

int main() {
    string A;
    cin >> A;

    if (p(A) == A) cout << "Yes";
    else cout << "No";
    return 0;
}
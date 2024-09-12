#include <iostream>

using namespace std;


string find(string s) {
    int cnt = 0;
    for (int i = 0;i < s.size();i++) {
        for (int j = i;j < s.size();j++) {
            if (s[i] != s[j]) cnt++;
        }
    }

    if (cnt > 1) return "Yes";
    else return "No";
}

int main() {
    string str;
    cin >> str;

    cout << find(str);
    return 0;
}
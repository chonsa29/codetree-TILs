#include <iostream>
#include <vector>

using namespace std;

string str;
string str2;

int compare(string s1, string s2) {
    int cnt = -1;
    for (int i = 0;i < s1.size();i++) {
        if (s1[i] == s2[0]) {
            for (int j = 0;j < s2.size();j++) {
                if (s1[i + j] == s2[j]) cnt++;
            }
            if (cnt == s2.size()) return i;
        }
    }
    return -1;
}
int main() {
    cin >> str >> str2;

    cout << compare(str, str2);
    return 0;
}
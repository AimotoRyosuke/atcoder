#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    int count = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '1') {
            count++;
        }
    }
    cout << count << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> inputs;
    int i = 0;
    while (true) {
        int num;
        cin >> num;
        inputs.push_back(num);
        if (num == 0) {
            break;
        }
    }
    reverse(inputs.begin(), inputs.end());
    for (int i = 0; i < (int)inputs.size(); i++) {
        cout << inputs.at(i) << endl;
    }
}

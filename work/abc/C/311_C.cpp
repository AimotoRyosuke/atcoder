#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A) {
        cin >> a;
        a--;
    }

    vector<bool> used(N);
    int cur = 0;
    while (!used.at(cur)) {
        used.at(cur) = true;
        cur = A.at(cur);
    }

    vector<int> ans = {cur};
    int first = cur;
    cur = A.at(cur);
    while (first != cur) {
        ans.push_back(cur);
        cur = A.at(cur);
    }

    cout << ans.size() << endl;
    for (auto a : ans)
        cout << a + 1 << " ";
    cout << endl;
}

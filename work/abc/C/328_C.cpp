#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    map<int, int> i_count;
    int count = 0;
    for (int i = 0; i < N - 1; i++) {
        if (i != 0)
            count = i_count[i - 1];
        if (S.at(i) == S.at(i + 1)) {
            count++;
        }
        i_count[i] = count;
    }
    int max_count = i_count[N - 2];
    vector<int> ans;
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        int count = max_count;
        cout << "l:" << i_count[l - 2] << endl;
        if (l != 0)
            count -= i_count[l - 2];
        cout << "r:" << i_count[r - 2] << endl;
        if (r != N)
            count -= max_count - i_count[r - 2];
        ans.push_back(count);
    }
    for (auto a : ans)
        cout << a << endl;
}

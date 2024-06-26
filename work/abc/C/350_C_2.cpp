#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
    vector<pair<int, int>> ans;
    rep(i, N) {
        while (A.at(i) != i + 1) {
            int temp = A.at(i);
            ans.emplace_back(i + 1, temp);
            A.at(i) = A.at(temp - 1);
            A.at(temp - 1) = temp;
        }
    }
    cout << ans.size() << endl;
    rep(i, ans.size()) cout << ans.at(i).first << " " << ans.at(i).second
                            << endl;
}

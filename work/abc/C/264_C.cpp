#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

void combineHelper(int n, int k, int start, vector<int> &current,
                   vector<vector<int>> &result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    for (int i = start; i < n; ++i) { // i <= n から i < n に修正
        current.push_back(i);
        combineHelper(n, k, i + 1, current, result);
        current.pop_back(); // 次の組み合わせのためにバックトラック
    }
}

vector<vector<int>> comb(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combineHelper(n, k, 0, current, result);
    return result;
}

struct G {
    int h, w;
    vector<vector<int>> cells;

    void input() {
        cin >> h >> w;
        cells = vector<vector<int>>(h, vector<int>(w));
        rep(i, h) rep(j, w) cin >> cells.at(i).at(j);
    }
    void convert(vector<int> &is, vector<int> &js) {
        auto tmp = cells;
        cells = vector<vector<int>>(is.size(), vector<int>(js.size()));
        rep(i, is.size()) rep(j, js.size()) {
            cells.at(i).at(j) = tmp.at(is.at(i)).at(js.at(j));
        }
    }

    bool equal(G C) {
        bool ok = true;
        rep(i, h) {
            rep(j, w) {
                if (cells.at(i).at(j) != C.cells.at(i).at(j)) {
                    ok = false;
                    break;
                }
            }
        }
        return ok;
    }
};

int main() {
    G A, B;
    A.input(), B.input();
    bool ok = A.cells == B.cells;
    auto di = comb(A.h, B.h);
    auto dj = comb(A.w, B.w);
    rep(i, di.size()) rep(j, dj.size()) {
        auto C = A;
        C.convert(di.at(i), dj.at(j));
        if (B.equal(C)) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
}

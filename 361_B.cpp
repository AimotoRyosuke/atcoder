#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int a, b, c, d, e, f, g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
    auto isOverlapping = [&]() -> bool {
        // 各軸での重なりを確認
        int x_overlap = max(min(d, j) - max(a, g), 0);
        int y_overlap = max(min(e, k) - max(b, h), 0);
        int z_overlap = max(min(f, l) - max(c, i), 0);

        // 重なりがある場合、体積は0より大きくなる
        int overlapping_volume = x_overlap * y_overlap * z_overlap;

        return overlapping_volume > 0;
    };

    // ラムダ式を呼び出して結果を取得
    bool ok = isOverlapping();
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}

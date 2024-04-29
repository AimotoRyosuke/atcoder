#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> coordinate(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> coordinate.at(i).at(0) >> coordinate.at(i).at(1);
    }

    // // 座標通しの距離を測定する
    vector<int> distancePoint(n, 0);
    for (int i = 0; i < coordinate.size(); i++) {
        int maxDistance = 0;
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            int distance =
                (coordinate.at(i).at(0) - coordinate.at(j).at(0)) *
                    (coordinate.at(i).at(0) - coordinate.at(j).at(0)) +
                (coordinate.at(i).at(1) - coordinate.at(j).at(1)) *
                    (coordinate.at(i).at(1) - coordinate.at(j).at(1));
            if (maxDistance < distance) {
                maxDistance = distance;
                distancePoint.at(i) = j + 1;
            }
        }
        cout << distancePoint.at(i) << endl;
    }
}

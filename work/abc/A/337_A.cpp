#include <bits/stdc++.h>
using namespace std;

const string team_x = "Takahashi";
const string team_y = "Aoki";

int main() {
    int N;
    cin >> N;
    int count_x = 0, count_y = 0;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        count_x += x;
        count_y += y;
    }
    if (count_x > count_y)
        cout << team_x << endl;
    else if (count_x < count_y)
        cout << team_y << endl;
    else
        cout << "Draw" << endl;
}

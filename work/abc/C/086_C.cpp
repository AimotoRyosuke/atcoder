#include <bits/stdc++.h>
using namespace std;

bool isEven(int number) { return number % 2 == 0; }

int main() {
    int n;
    cin >> n;

    int t = 0, x = 0, y = 0;
    int t_next, x_next, y_next;
    bool canTravel = true;
    for (int i = 1; i <= n; i++) {
        cin >> t_next >> x_next >> y_next;
        if (!canTravel) {
            continue;
        }
        int sumNext = x_next + y_next;
        if ((isEven(t_next) && !isEven(sumNext)) ||
            (!isEven(t_next) && isEven(sumNext))) {
            canTravel = false;
            continue;
        }
        int time_diff = t_next - t;
        int position_diff = abs(x_next - x) + abs(y_next - y);
        if (position_diff > time_diff) {
            canTravel = false;
            continue;
        }
        t = t_next;
        x = x_next;
        y = y_next;
    }

    if (canTravel)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

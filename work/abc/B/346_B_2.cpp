#include <bits/stdc++.h>
using namespace std;

const string base = "wbwbwwbwbwbw";

int main() {
    int W, B;
    cin >> W >> B;

    for (int i = 0; i < (int)base.size(); i++) {
        int j = 0;
        int w_count = 0, b_count = 0;
        while (w_count <= W && b_count <= B) {
            char c = base.at((i + j + base.size()) % base.size());
            if (c == 'w')
                w_count++;
            else
                b_count++;
            if (w_count == W && b_count == B) {
                cout << "Yes" << endl;
                return 0;
            }
            j++;
        }
    }
    cout << "No" << endl;
}

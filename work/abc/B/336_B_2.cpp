#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    bitset<60> bs(N);
    string bs_str = bs.to_string();
    int count = 0;
    for (int i = 0; i < bs_str.size(); i++) {
        if (bs_str.at(bs_str.size() - 1 - i) == '0') {
            count++;
        } else
            break;
    }
    cout << count << endl;
}

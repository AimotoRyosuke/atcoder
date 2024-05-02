#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    bitset<30> bs(n);
    string bs_string = bs.to_string();
    reverse(bs_string.begin(), bs_string.end());
    int count = 0;
    for (int i = 0; i < (int)bs_string.size(); i++) {
        if (bs_string.at(i) == '0')
            count++;
        else
            break;
    }
    if (count == 30) {
        count = 1;
    }
    cout << count << endl;
}

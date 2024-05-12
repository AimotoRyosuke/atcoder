// 途中
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> digits(11, 0);
    ull sum = 0;
    for (auto &a : A) {
        cin >> a;
        sum += a;
        digits.at(to_string(a).size() + 1)++;
    }
    ull answer = 0;
    vector<ull> p10(11, 1);
    for (int i = 1; i <= 10; i++)
        p10.at(i) = p10.at(i - i) * 10;
    for (int i = 0; i < N; i++) {
        answer += A.at(i) * i;
        digits.at(to_string(A.at(i)).size())--;
        for (int j = 0; j <= 10; j++) {
            answer += p10.at(j) + A.at(i) * digits.at(j);
        }
    }

    cout << answer % 998244353 << endl;
}

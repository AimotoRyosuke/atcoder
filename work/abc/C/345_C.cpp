#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string S;
    cin >> S;
    ll size = S.size();
    ll answer;
    map<char, ll> char_count;
    for (int i = 0; i < size; i++)
        char_count[S.at(i)]++;
    answer = size * (size - 1) / 2;
    ll same = 0;
    for (const auto m : char_count)
        same += (m.second * (m.second - 1) / 2);
    answer -= same;
    if (same)
        answer++;
    cout << answer << endl;
}

#include <bits/stdc++.h>
using namespace std;

struct Exam {
    int num;
    vector<int> keys;
    bool correct;
    Exam(vector<int> keys, bool correct) : keys(keys), correct(correct) {};
};

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<Exam> exams;
    for (int i = 0; i < M; i++) {
        int c;
        cin >> c;
        map<int, int> key_C;
        vector<int> keys(c);
        for (auto &k : keys)
            cin >> k;
        char r;
        cin >> r;
        exams.emplace_back(keys, r == 'o');
    }
    int ans = 0;

    auto check = [&](string bs_str) {
        bool ok = true;
        for (auto exam : exams) {
            int cnt = 0;
            for (auto key : exam.keys) {
                if (bs_str.at(key - 1) == '1')
                    cnt++;
            }
            if ((cnt >= K) != exam.correct)
                ok = false;
        }
        if (ok)
            ans++;
    };
    for (int i = 0; i < pow(2, N); i++) {
        bitset<15> bs(i);
        string bs_temp_str = bs.to_string();
        string bs_str =
            bs_temp_str.substr(bs_temp_str.size() - N, bs_temp_str.size());
        check(bs_str);
    }
    cout << ans << endl;
}

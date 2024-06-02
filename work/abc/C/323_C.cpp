#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> Q;
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i);
        Q.push_back({i, A.at(i)});
    }
    vector<string> S(N);
    vector<pair<int, int>> score_list;
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
        string s = S.at(i);
        int score = i + 1;
        for (int j = 0; j < (int)s.size(); j++) {
            if (s.at(j) == 'o')
                score += A.at(j);
        }
        score_list.push_back({i, score});
    }
    sort(score_list.begin(), score_list.end(),
         [](const auto &a, const auto &b) { return a.second > b.second; });
    sort(Q.begin(), Q.end(),
         [](const auto &a, const auto &b) { return a.second > b.second; });

    int max_score = score_list.at(0).second;
    vector<pair<int, int>> lack_list;
    for (int i = 0; i < (int)score_list.size(); i++) {
        int score = score_list.at(i).second;
        int s_i = score_list.at(i).first;
        string s = S.at(s_i);
        int cur = 0, loss = 0;
        int value = 0;
        while (score + value < max_score) {
            int a_i = Q.at(cur).first;
            if (s[a_i] == 'x') {
                value += A.at(a_i);
            } else {
                loss--;
            }
            cur++;
        }
        lack_list.push_back({score_list.at(i).first, cur + loss});
    }
    sort(lack_list.begin(), lack_list.end(),
         [](const auto &a, const auto &b) { return a.first < b.first; });
    for (int i = 0; i < (int)lack_list.size(); i++) {
        cout << lack_list.at(i).second << endl;
    }
}

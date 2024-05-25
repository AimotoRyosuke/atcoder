#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    map<int, vector<int>> d;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.at(i) = a;
        d[a].push_back(i);
    }
    ll sum = accumulate(A.begin(), A.end(), 0LL);
    vector<ll> ans(N);
    for (auto [v, i_list] : d) {
        sum -= (ll)v * i_list.size();
        for (auto i : i_list)
            ans[i] = sum;
    }
    for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

// ver.1 has TLE Error
// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     map<int, vector<int>> d;
//     for (int i = 0; i < n; i++)
//         d[a[i]].push_back(i);

//     ll s = accumulate(a.begin(), a.end(), 0LL);
//     vector<ll> ans(n);
//     for (auto [v, i_list] : d) {
//         s -= (ll)v * i_list.size();
//         for (auto i : i_list)
//             ans[i] = s;
//     }

//     for (auto x : ans)
//         cout << x << ' ';
// }

// int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     set<int, greater<int>> B;
//     map<int, int> num_count;
//     for (auto &a : A) {
//         cin >> a;
//         B.insert(a);
//         num_count[a]++;
//     }
//     map<int, ll> cache;
//     for (int i = 0; i < N; i++) {
//         int a = A.at(i);
//         if (cache.count(a)) {
//             cout << cache[a] << " ";
//             continue;
//         }
//         ll sum = 0;
//         for (auto b : B) {
//             if (a == b) {
//                 cout << sum << " ";
//                 cache[a] = sum;
//                 break;
//             }
//             sum += b * num_count[b];
//         }
//     }
//     cout << endl;
// }

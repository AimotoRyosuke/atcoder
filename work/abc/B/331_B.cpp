#include <bits/stdc++.h>
using namespace std;

const int s_num = 6;
const int m_num = 8;
const int l_num = 12;

int main() {
    int n, s, m, l;
    cin >> n >> s >> m >> l;

    int s_only;
    if (n % s_num) {
        s_only = n / s_num + 1;
    } else {
        s_only = n / s_num;
    }

    int m_only;
    if (n % m_num) {
        m_only = n / m_num + 1;
    } else {
        m_only = n / m_num;
    }

    int l_only;
    if (n % l_num) {
        l_only = n / l_num + 1;
    } else {
        l_only = n / l_num;
    }

    int min_price = s_only * s;

    for (int s_pack = s_only - 1; s_pack >= 0; s_pack--) {
        int s_lack = n - s_pack * s_num;
        for (int m_pack = 0; m_pack <= m_only; m_pack++) {
            int m_lack = s_lack - m_pack * m_num;
            if (m_lack <= 0) {
                min_price = min(min_price, s_pack * s + m_pack * m);
                break;
            }
            for (int l_pack = 0; l_pack <= l_only; l_pack++) {
                int l_lack = m_lack - l_pack * l_num;
                if (l_lack <= 0) {
                    min_price =
                        min(min_price, s_pack * s + m_pack * m + l_pack * l);
                    break;
                }
            }
        }
    }
    cout << min_price << endl;
}

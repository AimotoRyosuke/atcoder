#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    vector<int> A, ans;
    for (int i = 0; i < Q; i++){
        int no, content;
        cin >> no >> content;
        if(no==1)
            A.push_back(content);
        else if(no==2)
            ans.push_back(A.at(A.size()-content));
    }
    for (auto x: ans)
        cout << x << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,D;
    cin >> A>>B>>D;
    int current = A;
    while(current <= B){
        cout << current << " ";
        current+=D;
    }
    cout << endl;
}

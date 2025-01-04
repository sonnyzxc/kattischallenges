#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define pis pair<int, string>
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    priority_queue<int, vi, greater<int>> pq;

    while (N--) {
        ll x;
        cin >> x;
        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << endl;
            } else {
                cout << pq.top() << endl;
                pq.pop();
            }
        } else {
            pq.push(x);
        }
    }
}
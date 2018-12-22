#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

int Cycle(const int num, unordered_map<int, int>& m) {
    if (m.find(num) == m.end()) {
        queue<int> q;
        auto tmp = num;
        while (true) {
            q.push(tmp);
            if (tmp == 1) break;
            if (tmp & 1) {
                tmp = 3 * tmp + 1;
            } else {
                tmp >>= 1;
            }
        }
        while(!q.empty()) {
            m[q.front()] = q.size();
            q.pop();
        }
    }
    return m[num];
}

int Solve(int i, int j, unordered_map<int, int>& m) {
    int res = 0;
    for (int k = i; k <= j; ++k) {
        res = max(res, Cycle(k, m));
    }
    return res;
}

int main() {
    unordered_map<int, int> m;
    int i, j;
    while(cin >> i >> j) {
        int i2, j2;
        i2 = i <= j ? i : j;
        j2 = i <= j ? j : i;
        auto ans = Solve(i2, j2, m);
        cout << i << " " << j << " " << ans << "\n";
    }
    return EXIT_SUCCESS;
}

#include <iostream>
#include <cstdio>

using namespace std;

int getDegrees(int a, int b) {
    return ((a - b + 40 ) % 40) * 9;
}

int main() {

    int p, c1, c2, c3;

    while (scanf("%d %d %d %d", &p, &c1 ,&c2, &c3), p || c1 || c2 || c3)
    {
        int total = 1080 + getDegrees(p, c1) + getDegrees(c2, c1) + getDegrees(c2, c3);
        cout << total << endl;
    }

    return 0;
}


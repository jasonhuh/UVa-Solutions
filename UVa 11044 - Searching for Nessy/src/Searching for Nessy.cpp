#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int TC;
    scanf("%d", &TC);
    while (TC--) {
        int n, m;
        scanf("%d %d", &n, &m);
        cout <<  (n/3) * (m/3) << endl;
    }
    
    return 0;
}
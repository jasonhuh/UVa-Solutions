#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    int TC;
    scanf("%d", &TC);
    while (TC--) {
        
        int n;
        scanf("%d", &n);
        
        int l = 99, r = 0, s;
        while (n--) {
            scanf("%d", &s);
            l = min(l, s);
            r = max(r, s);
        }
        printf("%d\n", 2 * (r - l));
    }
    return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    int T;
    scanf("%d", &T);
    
    int tc = 0;
    while (T--) {
        tc++;
        int l, w, h;
        scanf("%d %d %d", &l, &w, &h);
        
        if (l > 20 || w > 20 || h > 20) {
            printf("Case %d: bad\n", tc);
        } else {
            printf("Case %d: good\n", tc);
        }
    }
    
    return 0;
}
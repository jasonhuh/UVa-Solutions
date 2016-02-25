#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    int n, c = 0;
    while (scanf("%d", &n), n) {
        c++;
        int i = 0, j = 0;
        while (n--) {
            
            int e;
            scanf("%d", &e);
            
            if (e > 0) {
                i++;
            } else if (e == 0) {
                j++;
            }
        }
        printf("Case %d: %d\n",c, i - j);
    }
    
    return 0;
}
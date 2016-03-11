#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    int T, W;
    scanf("%d", &T);
    
    while (T--) {
        
        scanf("%d", &W);
        
        int diff[W];
        for (int i=0; i<W; i++) {
            int y1, y2;
            scanf("%d %d", &y1, &y2);
            diff[i] = y1 - y2;
        }
        
        bool canClose = true;
        for (int i=1; i<W; i++) {
            if (diff[i-1] != diff[i]) {
                canClose = false;
                break;
            }
        }
        
        canClose ? printf("yes\n") : printf("no\n");
        
        if (T > 0) {
            printf("\n");
        }
    }
    
    return 0;
}
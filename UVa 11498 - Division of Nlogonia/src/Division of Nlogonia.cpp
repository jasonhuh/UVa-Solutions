#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    while (true) {
        
        int K;
        scanf("%d", &K);
        
        if (K == 0) {
            break;
        }
        
        int N, M;
        scanf("%d %d", &N, &M);
        while (K--) {
            
            int X, Y;
            scanf("%d %d", &X, &Y);
            
            if (X == N || Y == M) {
                printf("divisa");
            } else if (X < N && Y > M) {
                printf("NO");
            } else if (X > N && Y > M) {
                printf("NE");
            } else if (X > N && Y < M) {
                printf("SE");
            } else {
                printf("SO");
            }
            printf("\n");
        }
    }
    
    return 0;
}
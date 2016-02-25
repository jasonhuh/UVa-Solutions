#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

static const int ARRAY_SIZE = 3;

int main() {
    
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i<T; i++) {
        
        int s[ARRAY_SIZE];
        scanf("%d %d %d", s, s+1, s+2);
        sort(s, s+ARRAY_SIZE);
        printf("Case %d: %d\n", i+1, s[ARRAY_SIZE/2]);
    }
    
    return 0;
}
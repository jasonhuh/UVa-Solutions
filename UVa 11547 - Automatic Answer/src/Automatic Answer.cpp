#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    int t;
    scanf("%d", &t);
    
    while (t--) {
        
        int n;
        scanf("%d", &n);
        
        int a = (((n * (567 / 9)) + 7492) * (235/47))-498;
        
        int t = abs((a / 10) % 10);
        printf("%d\n", t);
    }
    
    return 0;
}
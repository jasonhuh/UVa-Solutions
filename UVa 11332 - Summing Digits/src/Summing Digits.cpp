#include <iostream>
#include <cstdio>

using namespace std;

void sumDigits(int n) {
    
    if (n / 10 == 0) {
        printf("%d\n", n);
        return;
    }
    
    int sum = 0;
    int x = n;
    while (x > 0) {
        sum += x%10;
        x = x/10;
    }
    sumDigits(sum);
}

int main() {
    
    int n=0;
    while (scanf("%d", &n), n != 0) {
        sumDigits(n);
    }
    return 0;
}
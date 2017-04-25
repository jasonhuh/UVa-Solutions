#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cassert>

using namespace std;

unsigned Solve(unsigned long long int a, unsigned long long int b) {
    unsigned carry = 0, res = 0;
    while (a || b) {
        carry = (carry + (a % 10) + (b % 10)) / 10;
        res += carry;
        a /= 10;
        b /= 10;
    }
    return res;
}

void SmallTest() {
    assert(9 == Solve(999999999, 999999999));
    assert(0 == Solve(123, 456));
    assert(3 == Solve(555, 555));
    assert(1 == Solve(123, 594));
}

int main() {
    SmallTest();
    unsigned long long int a, b;
    while(scanf("%llu %llu", &a, &b) && (a || b)) {
        auto ans = Solve(a, b);
        printf("%s carry operation%s.\n", ans == 0 ? "No" : to_string(ans).c_str(), ans > 1 ? "s" : "");
    }
    return 0;
}
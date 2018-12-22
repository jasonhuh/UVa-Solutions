#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

double Solve(const vector<double>& A, double avg) {
    double resPos = 0, resNeg = 0;
    for (double a : A) {
        double diff = (double)(long)((a - avg) * 100.0) / 100.0;
        if (diff > 0) {
            resPos += diff;
        } else {
            resNeg += diff;
        }
    }
    return -resNeg > resPos ? -resNeg : resPos;
}

int main() {
    int n;
    while(scanf("%d", &n) && n != 0) {
        vector<double> A;
        double total = 0, price;
        for (int i = 0; i < n; ++i) {
            scanf("%lf", &price);
            total += price;
            A.push_back(price);
        }
        auto ans = Solve(A, total/n);
        printf("$%.2lf\n", ans);
    }
    return 0;
}
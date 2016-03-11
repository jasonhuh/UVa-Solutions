#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    
    int a; float b;
    int months, n;
    float down, loan;
    
    while(scanf("%d %f %f %d", &months, &down, &loan, &n), months || down || loan || n) {
        
        if (months < 0) {
            break;
        }
        
        float depr[months+1];
        
        fill_n(depr, months+1, -1);
        
        for (int i=0; i<n; i++) {
            scanf("%d %f", &a, &b);
            depr[a] = b;
        }
        
        // Generate the depreciation table
        for (int i=0; i<months+1; i++) {
            if (depr[i] < 0) {
                depr[i] = depr[i-1];
            }
        }
        
        float amount = loan;
        float car = (loan + down);
        float payment = loan / months;
        
        // Calculate the months
        for (int i=0; i<=months; i++) {
            
            car -= car * depr[i];
            
            if (i > 0) {
                amount -= payment;
            }
            if (amount < car) {
                if (i == 1) {
                    printf("%d month\n", i);
                } else {
                    printf("%d months\n", i);
                }
                break;
            }
        }
    }
    
    return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    //Formula: space / animals * friendliness * animals = space * friendliness
    int n, f;
    
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &f);
        
        int sum = 0;
        while (f--) {
            int space, animals, friendliness;
            scanf("%d %d %d", &space, &animals, &friendliness);
            sum += (space * friendliness);
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    char c;
    int cnt = 0;
    while ((c = getchar()) != EOF) {
     
        if (c == '"') {
            cnt++;
            cout << ((cnt % 2 == 1) ? "``" : "''");
        } else {
            cout << c;
        }
    }
    
    return 0;
}
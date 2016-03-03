#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    
    string s;
    int c = 0;
    while (getline(cin, s)) {
        c++;
        if (s == "*") {
            break;
        } else if (s == "Hajj") {
            printf("Case %d: Hajj-e-Akbar\n", c);
        } else if (s == "Umrah") {
            printf("Case %d: Hajj-e-Asghar\n", c);
        }
    }
    
    return 0;
}
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    
    int T;
    scanf("%d", &T);
    
    while (T--) {
        
        string s;
        cin >> s;
        if (s.length() == 5) {
            
            printf("3\n");
        } else if (s.length() == 3) {
            
            string one = "one", two = "two";
            int f_one = 0, f_two = 0;
            
            for (int i=0; i<3; i++) {
                if (s[i] == one[i]) { f_one++; }
                if (s[i] == two[i]) { f_two++; }
            }
            
            if (f_one >= 2) { printf("1\n"); }
            if (f_two >= 2) { printf("2\n"); }
        }
    }
    
    return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    
    int n = 0;
    string s;
    while (getline(cin, s)) {
        
        if (s == "#") {
            break;
        }
        n++;
        printf("Case %d: ", n);
        if (s == "HELLO") {
            printf("ENGLISH");
        } else if (s == "HOLA") {
            printf("SPANISH");
        } else if (s == "HALLO") {
            printf("GERMAN");
        } else if (s == "BONJOUR") {
            printf("FRENCH");
        } else if (s == "CIAO") {
            printf("ITALIAN");
        } else if (s == "ZDRAVSTVUJTE") {
            printf("RUSSIAN");
        } else {
            printf("UNKNOWN");
        }
        printf("\n");
    }
    
    return 0;
}
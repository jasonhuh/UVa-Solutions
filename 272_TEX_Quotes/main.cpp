#include <iostream>
#include <cassert>
#include <memory>

using namespace std;

class Solution {
public:
    Solution(): _countDoubleQuote(0) {};
    string solve(string str) {
        string res;
        for (auto c : str) {
            if (c == '"') {
                res += (++_countDoubleQuote % 2 == 1) ? "``" : "''";
            } else {
                res += c;
            }
        }
        return res;
    }

private:
    int _countDoubleQuote;
};

void smallTest() {
    unique_ptr<Solution> sol(new Solution());
    assert("``To be or not to be,'' quoth the Bard, ``that\n"
           == sol->solve("\"To be or not to be,\" quoth the Bard, \"that\n"));
    assert("is the question''.\n"
           == sol->solve("is the question\".\n"));
}

int main() {
    //smallTest();
    unique_ptr<Solution> sol(new Solution());
    string str;
    while(getline(cin, str)) {
        cout << sol->solve(str) << endl;
    }
    return EXIT_SUCCESS;
}
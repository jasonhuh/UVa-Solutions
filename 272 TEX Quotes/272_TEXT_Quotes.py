def solve(s):
    s2 = ''
    found = False
    for c in s:
        if c == '"':
            if not found:
                s2 += '``'
                found = True
            else:
                s2 += "''"
        else:
            s2 += c    
    return s2

def test_simple():
    assert solve('"To be or not to be," quoth the Bard, "that') \
            == "``To be or not to be,'' quoth the Bard, ''that"

if __name__ == '__main__':
    while True:
        try:
            s = input()
            print(solve(s))
        except EOFError:
            break

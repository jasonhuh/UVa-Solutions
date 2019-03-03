def solve(s):
    s2 = ''
    first = True
    for c in s:
        if c == '"':
            if first:
                s2 += '``'
            else:
                s2 += "''"
            first = False if first else True

        else:
            s2 += c    
    return s2

def test_simple():
    assert solve('"To be or not to be," quoth the bard, "that is the question."') \
            == "``To be or not to be,'' quoth the bard, ``that is the question.''"

if __name__ == '__main__':
    while True:
        try:
            s = input()
            print(solve(s))
        except EOFError:
            break

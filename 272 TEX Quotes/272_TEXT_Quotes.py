def solve(s):
    res, first = '', True
    for c in s:
        if c == '"':
            res += '``' if first else "''"
            first = False if first else True
        else:
            res += c    
    return res

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

cnt_double_quote = 0

def solve(s):
    global cnt_double_quote
    res = ''
    for c in s:
        if c == '"':
            cnt_double_quote += 1
            if cnt_double_quote % 2 == 1: # First quote
                res += '``'
            else: # Second quote
                res += "''"
        else:
            res += c    
    return res

def test_simple():
    assert solve('"To be or not to be," quoth the bard, "that is the question."') \
            == "``To be or not to be,'' quoth the bard, ``that is the question.''"
    assert solve('The programming contestant replied: "I must disagree.') \
            == "The programming contestant replied: ``I must disagree."

if __name__ == '__main__':
    while True:
        try:
            s = input()
            print(solve(s))
        except EOFError:
            break

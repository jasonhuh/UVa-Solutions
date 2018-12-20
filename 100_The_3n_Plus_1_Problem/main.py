def cycle(memo, n):
    if n in memo:
        return memo[n]
    if n == 1:
        return 1
    memo[n] = 1 + cycle(memo, 3*n + 1 if n & 1 == 1 else n >> 1)
    return memo[n]

def solve(memo, i, j):
    res = 0
    for n in range(i, j + 1):
        res = max(res, cycle(memo, n))
    return res

if __name__ == '__main__':
    memo = {}
    while True:
        try:
            i, j = map(int, input().split())
        except EOFError:
            break
            
        ans = solve(memo, min(i, j), max(i, j))
        print('{} {} {}'.format(i, j, ans))

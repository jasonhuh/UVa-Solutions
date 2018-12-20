#Note: Work in progress
import sys

def cycle(memo, n):
    if n in memo:
        return memo[n]
    if n == 1:
        return 1
    memo[n] = 1 + cycle(memo, n//2 if n % 2 == 0 else 3*n + 1)
    return memo[n]

def solve(i, j):
    if i > j:
        i, j = j, i
    memo, res = {}, 0
    for n in range(i, j + 1):
        res = max(res, cycle(memo, n))
    return res

if __name__ == '__main__':

    for line in sys.stdin:
        i, j = map(int, input().rsplit())
        ans = solve(i, j)
        print('{} {} {}'.format(i, j, ans))
    
    exit(0)

#         # i, j = map(int, line.split()[:2])

def solve(n: int) -> int:
    k = 9
    i = 1
    while n > k * i:
        n -= k * i
        k *= 10
        i += 1
    return int(str(k // 9 + (n - 1) // i)[(n - 1) % i])

q = int(input())
for _ in range(q):
    n = int(input())
    print(solve(n))
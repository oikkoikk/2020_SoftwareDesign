def recursive (N):
    if (N == 0):
        return 0
    else:
        return N+recursive(N-1)

n = int(input())


print(recursive(n), end = '')
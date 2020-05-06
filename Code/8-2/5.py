def Com(N, R):
    if(N == R or R == 0):
        return 1
    else:
        return (Com(N - 1, R - 1) + Com(N - 1, R))
    
n, r = map(int, input().split())
print(Com(n, r), end='')

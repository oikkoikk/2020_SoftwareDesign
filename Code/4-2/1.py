def printLine(n):
    for i in range(1, n+1):
        if(not(i == n)):
            print(i, " ", end='')
        else:
            print(i,end='\n')


n = int(input())
for i in range(1, n+1):
    printLine(i)
for i in range(n, 0, -1):
    printLine(i)
def printStarDia(n):
    if(n % 2 != 0):
        for i in range(1, n+1):
            for j in range(2*n):
                if(i % 2 != 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 == 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')
                elif(i % 2 == 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 != 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')

            print()

        for i in range(n, -1, -1):
            for j in range(2*n):
                if(i % 2 != 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 == 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')
                elif(i % 2 == 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 != 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')
            print()
    else:
        for i in range(1, n+1):
            for j in range(2*n):
                if(i % 2 != 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 != 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')
                elif(i % 2 == 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 == 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')

            print()

        for i in range(n, -1, -1):
            for j in range(2*n):
                if(i % 2 != 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 != 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')
                elif(i % 2 == 0):
                    if((n-1-i <= j <= n-1+i) and (j % 2 == 0)):
                        print('*', end='')
                    else:
                        print(' ', end='')
            print()

n = int(input())
printStarDia(n)

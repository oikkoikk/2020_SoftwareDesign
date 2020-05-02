
while(True):
    num = str(input())
    if('a'<=num<='z'):
        print("-> " + num.upper())
    elif('A'<=num<='Z'):
        print("-> " + num.lower())
    elif('0'<=num<='9'):
        print("-> " + num)
    else:
        break
print("exit", end='')

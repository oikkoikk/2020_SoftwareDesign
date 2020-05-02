gMul = 1


def addTotal(num):
    sum = 0
    for i in range (1,num+1):
        sum += i
    return sum


def mulTotal(num):
    global gMul
    for i in range (1,num+1):
        gMul *= i


n = int(input())
mulTotal(n)
sum = addTotal(n)
print("addTotal():", sum)
print("gMul:", gMul)

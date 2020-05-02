def add(num1, num2):
    return num1+num2


def sub(num1, num2):
    return num1-num2


def mul(num1, num2):
    return num1*num2


def div(num1, num2):
    return num1/num2


def mod(num1, num2):
    return num1 % num2


def printMsg():
 print("completed")


A = int(input())
B = int(input())

print("sum:", add(A, B))
print("difference:", sub(A, B))
print("product:", mul(A, B))
print("division:", div(A, B))
print("remainder:", mod(A, B))
printMsg()

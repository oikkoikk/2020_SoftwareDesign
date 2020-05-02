import random

numList = random.sample(range(1,1000),100)
for i in numList:
    print((i), end = ' ')
print()
MAX= 0
for i in numList:
    if(i>MAX):
        MAX = i
print("max value:" ,MAX)
    
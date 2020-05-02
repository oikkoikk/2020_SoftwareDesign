num = int(input())
i=0
while(i<num):
    j=0
    while(j<i+1):
        print('*', end='')
        j+=1
    if(i!=num-1):
        print()
    i+=1
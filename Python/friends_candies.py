testcases = int(input())

for i in range(testcases):
    n = int(input())
    a = list(map(int,input().split()))
    m = sum(a)/n

    if int(m)- m == 0:
        print(len([x for x in a if x>m]))
    else:
        print('-1')
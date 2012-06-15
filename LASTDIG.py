d = {0: [0], 1: [1], 2: [2, 4, 8, 6], 3: [3, 9, 7, 1], 4: [4, 6], 5: [5],
     6: [6], 7: [7, 9, 3, 1], 8: [8, 4, 2, 6], 9: [9, 1]}
for i in range(int(input())):
    a, b = map(int, input().split())
    if b == 0:
        print(1)
        continue
    elif a == 0:
        print(0)
    elif a == 1:
        print(1)
    elif a == 5:
        print(5)
    elif a == 6:
        print(6)
    else:
        k = a % 10
        print(d[k][(b % len(d[k]))-1])

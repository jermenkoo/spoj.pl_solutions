for i in range(int(input())):
    result = 0
    pocet = int(input())
    m = sorted(map(int, input().split()), reverse = True)
    w = sorted(map(int, input().split()), reverse = True)
    for j in range(pocet):
        result = result + m[j]*w[j]
    print(result)

for i in range(int(input())):
    a, b = map(int, input().split())
    result = int(str(a)[::-1]) + int(str(b)[::-1])
    print(int(str(result)[::-1]))
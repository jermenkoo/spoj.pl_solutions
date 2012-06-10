for i in range(int(input())):
    x, y = map(int, input().split())
    if x == y:
        z = 2 * y - (y & 1)
        print(z)
    elif x - y == 2:
        z = 2 * y - (y & 1) + 2
        print(z)
    else:
        print("No Number")

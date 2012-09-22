a, b, c = map(int, input().split())
while not(a == 0 and b == 0 and c == 0):
    if b - a == c - b:
        print("{} {}".format("AP", (c << 1) - b))
    else:
        print("{} {}".format("GP", (c * c) // b))
    a, b, c = map(int, input().split())
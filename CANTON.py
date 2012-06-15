for _ in range(int(input())):
    k = 1
    n = int(input())
    while((k + 1) * (k + 2) / 2 < n): k += 1
    j = n - k * (k + 1) / 2
    i = k + 1 - j + 1
    if k % 2: i, j = j, i
    print("TERM {} IS {}/{}".format(n, int(i), int(j)))

for i in range(int(input())):
    m, n = input().split()
    word = n[:int(m)-1] + n[int(m):]
    print("%d %s" % (i + 1, word))

vstup = float(input())
while vstup != 0.00:
    result = 0
    n = 2
    while result < vstup:
        result = result + 1 / n
        n = n + 1
    print("{:d} card(s)".format(n - 2))
    vstup = float(input())
        

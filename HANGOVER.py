vstup = float(input())

p = [0]
r = 1

for i in range(1, 512):
    p.append(p[i - 1] + 1. / (i + 1))

while vstup != 0.00:
    r = 0
    while p[r] < vstup:
        r += 1
    print("{:.0f} card(s)".format(r))
    vstup = float(input())

from math import acos

const = 0.5 / acos(-1)

vstup = int(input())
while (vstup and 1) != 0:
    print("{:.2f}".format(vstup * vstup * const))
    vstup = int(input())

from math import sqrt

def s(x):
    return pow(x, 2)

def t(a, b, c):
    p = (a + b + c) / 2
    return sqrt(p * (p - a) * (p - b) * (p - c))

for _ in range(int(input())):
    a, b, c, d, e, f = map(int, input().split())
    v = s(a*b*e) + s(a*b*f) + s(a*c*d) + s(a*c*f) + s(a*d*f) + s(a*f*e) \
        + s(b*c*d) + s(b*c*e) + s(b*d*e) + s(b*f*e) + s(c*d*e) + s(c*d*f) \
        - s(a*b*d) - s(a*c*e) - s(b*c*f) - s(d*e*f) - s(c*c*d) - s(c*d*d) \
        - s(a*a*f) - s(a*f*f) - s(b*b*e) - s(b*e*e)
    v = sqrt(v)/12
    d = t(a,b,d)+t(a,c,e)+t(b,c,f)+t(d,e,f);
    print("{:.4f}".format(v / d * 3))

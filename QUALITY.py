counter = 0

def mask(n):
    return - 1 if n != 0 else 0

while True:
    try:
        a, b, c, d, e, f = map(int, input().split())
    except Exception:
        break
    t = 0
    ps = 0
    counter += 1
    
    t += mask(a) & (a + 1200 * (d - 1))
    t += mask(b) & (b + 1200 * (e - 1))
    t += mask(c) & (c + 1200 * (f - 1))

    ps = 3 - [a, b, c].count(0)

    print("team {}: {}, {}".format(counter, ps, t))
    

def z(contfrac, a=1, b=0, c=0, d=1):
    for x in contfrac:
        while a > 0 and b > 0 and c > 0 and d > 0:
            t = a // c
            t2 = b // d
            if not t == t2:
                break
            yield t
            a = (10 * (a - c*t))
            b = (10 * (b - d*t))
            # continue with same fraction, don't pull new x
        a, b = x*a+b, a
        c, d = x*c+d, c
    for digit in rdigits(a, c):
        yield digit

def rdigits(p, q):
    while p > 0:
        if p > q:
           d = p // q
           p = p - q * d
        else:
           d = (10 * p) // q
           p = 10 * p - q * d
        yield d

def e_cf_expansion():
    yield 1
    k = 0
    while True:
        yield k
        k += 2
        yield 1
        yield 1

def e_dec():
    return z(e_cf_expansion())

gen = e_dec()
e = [str(next(gen)) for i in range(24999)]
e.insert(1, '.')
print(''.join(e))

_cache = {0: 0}

def exchange(n):
    if n not in _cache:
        _cache[n] = max(n, exchange(n // 2) + exchange(n // 3) + exchange(n // 4))
    return _cache[n]

while True:
    try:
        vstup = int(input())
        print(exchange(vstup))
    except:
        break

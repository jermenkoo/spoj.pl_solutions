i = 1

n, k, s = map(int, input().split())
scr = sorted(list(map(int, input().split())), reverse = True)

while sum(scr[:i]) < s*k:
    i += 1
else:
    print(i)
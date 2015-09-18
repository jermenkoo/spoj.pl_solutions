p = input()
N = int(input())

c = [input().lstrip() for i in range(N)]
can = []

for s in c:
    if s.endswith(p):
        can.append(s)

if len(can) == 0:
    exit(print("Wrong fingerprints!", end=''))

can.sort()

print(len(can))
for s in can[:-1]:
    print(s)
print(can[-1], end='')

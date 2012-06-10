from string import whitespace

for i in range(int(input())):
    Q = list(map(len, [item.strip(whitespace) for item in input().split()]))
    count = "".join([str(int(Q[j] == Q[j-1])) for j in range(1, len(Q))])
    result = max(len(x) for x in count.split("0")) + 1
    print(result)

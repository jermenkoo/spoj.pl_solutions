rpn, index = {}, 0
for i in range(int(input())):
    vstup = list(input())
    temp = []
    rpn[index] = ''
    for char in vstup:
        if char.isalpha():
            rpn[index] += char
        else:
            if char == ')':
                rpn[index] += temp.pop()
            elif char != '(':
                temp.append(char)
    index += 1

for item in rpn:
    print(rpn[item])

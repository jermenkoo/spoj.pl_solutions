from fractions import gcd

def lcm(a, b):
    return (a / gcd(a, b)) * b

while True:
    answer = 1
    not_mult = []
    
    case = list(input())
    if case == ['*']:
        break
    elif case[0] == 'N':
        print(-1)
    else:
        for i in range(len(case)):
            if case[i] == 'Y':
                answer = lcm(answer, i + 1)
            else:
                not_mult.append(i + 1)

        contradict = False
        for i in not_mult:
            if answer%i == 0:
                contradict = True
        if contradict:
            print(-1)
        else:
            print(int(answer))

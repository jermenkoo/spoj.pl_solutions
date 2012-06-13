def _compound(amount, years, rate, charge):
    for _ in range(years):
        amount += int(amount*rate) - charge
    return amount

def _simple(amount, years, rate, charge):
    interest = 0
    for _ in range(years):
        interest += int(amount*rate)
        amount -= charge
    return amount + interest

for _ in range(int(input())):
    oper = {}
    results = []
    amount = int(input())
    years = int(input())
    count = int(input())
    for i in range(count):
        oper[i] = input().split()
        oper[i][0] = int(oper[i][0])
        oper[i][1] = float(oper[i][1])
        oper[i][2] = int(oper[i][2])
        if oper[i][0] == 0:
            results.append(_simple(amount, years, oper[i][1], oper[i][2]))
            
        else:
            results.append(_compound(amount, years, oper[i][1], oper[i][2]))
    print(max(results))

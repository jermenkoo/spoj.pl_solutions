import fractions

for x in range(int(input())):
	print(fractions.gcd(*map(int, input().split())))

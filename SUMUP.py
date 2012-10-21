def S(n): return (1/2)*(1-(1/(n**2+n+1)))

for t in range(int(input())):
    print("{0:.5f}".format(S(int(input()))))
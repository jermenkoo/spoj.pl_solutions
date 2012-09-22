import time
for p in range(input()):q=input();print time.strftime("%e %B",(0,(q>>5)&15,q&31,0,0,0,0,0,0)),q>>9

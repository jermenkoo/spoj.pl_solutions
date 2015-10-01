"""i=input
for _ in [0]*int(i()):
	_=i()
	n=list(map(int,i().split()))
	P,Q=n[1::2],n[::2]
	p=sum(n*(n>0)for n in P)
	q=-sum(n*(n<0)for n in Q)
	print("SEovmeer yM iGrirrolr sL iLeise!!"[q>p::2])"""

"""i=input
for _ in[0]*int(i()):
 _,u=i(),list(map(int,i().split()))
 p,q=sum(n*(n>0)for n in u[1::2]),-sum(n*(n<0)for n in u[::2])
 print("SEovmeer yM iGrirrolr sL iLeise!!"[q>p::2])"""

"""159 chars
i=input
exec('i();*u,=map(int,i().split());print("SEovmeer yM iGrirrolr sL iLeise!!"[-sum(n*(n<0)for n in u[::2])>sum(n*(n>0)for n in u[1::2])::2]);'*int(i()))
"""

i=input
for _ in[0]*int(i()):
 i()
 *u,=map(int,i().split())
 p=sum(n*(n>0)for n in u[1::2])
 q=-sum(n*(n<0)for _ in u[::2])
 print("SEovmeer yM iGrirrolr sL iLeise!!"[q>p::2])
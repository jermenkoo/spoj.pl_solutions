n=1299721;j=int;u=input;s=[1]*n
for i in range(3,1141,2):
 if s[i]:s[i*i::2*i]=[0]*((n-i*i-1)//(2*i)+1)
p=[2]+[i for i in range(3,n,2)if s[i]]
k=j(u())
while k:
 print(p[k-1])
 try:k=j(u())
 except:break
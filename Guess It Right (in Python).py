import math

t = int(input()) 
mod = 10**9+7
while t:
	n,k,m = map(int, input().split())
	p,q = 0,0 
	
	if n == 1 or (k == 1 and m > 1): 
		print('1')
	elif m == 1: 
		print(pow(n,mod-2,mod)) 
	elif n > k:
		if m%2 == 0: 
			n = n%k 
			m = m//2 
			p = pow(n,m,mod) - pow(n-1,m,mod)
			q = pow(n,m,mod) 
		else: 
			n = n%k 
			m = m//2 
			p = pow(n,m,mod)*(n + k) - pow(n-1,m,mod)*(n + k - 1)
			q = pow(n,m,mod)*(n + k) 
	else: 
		if m%2 == 0: 
			n = n%k 
			m = m//2 
			p = pow(n,m,mod)*(n + k) - pow(n-1, m,mod)*(n + k - 1)
			q = pow(n,m,mod)*(n + k) 
		else: 
			n = n%k 
			m = (m//2) + 1 
			p = pow(n,m,mod) - pow(n-1,m,mod) 
			q = pow(n,m,mod)
	
	if p!= 0 and q!=0:
		g = math.gcd(p,q) 
		p, q = p//g , q//g 
		ans = pow(q, mod-2, mod)*p
		print(int(ans%mod))
	t-=1

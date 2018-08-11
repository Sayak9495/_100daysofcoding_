def check(lst,x):
	for i in xrange(len(lst)-1,-1,-1):
		if (lst[i]>=x):
			return "YES"
	return "NO"


t=int(raw_input())
while t:
	t-=1
	n,x=[int(i) for i in raw_input().split()]
	lst=[int(i) for i in raw_input().split()]
	print(check(lst,x))

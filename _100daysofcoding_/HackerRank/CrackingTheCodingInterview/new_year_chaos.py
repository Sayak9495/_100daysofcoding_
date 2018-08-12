def find(lst,n):
	count=0
	lst_=range(1,n+1)
	for i,j in enumerate(lst):
		#print j
		if (abs(lst_.index(j)-i))>2:
			return "Too chaotic"

	for i in xrange(n-1,0,-1):
		#print "---",i
		if (lst[i] - (i+1)>2):
			return "Too chaotic"
		for j in xrange(max(0,lst[i]-2),i):
			#print ">>",j,lst[j],lst[i]
			if(lst[j] > lst[i]):
				count+=1
	return count

def driver():
	n=int(raw_input())
	lst=[int(i) for i in raw_input().split()]
	print(find(lst,n))

m=int(raw_input())
while m:
	m-=1
	driver()
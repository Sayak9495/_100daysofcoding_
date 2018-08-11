ans=[]
mid_pos,low_pos=0,0
def up(lst):
	global ans
	for i in xrange(4):
		ans.append(lst[i:i+3])

def mid(lst):
	global ans
	global mid_pos
	for i in xrange(1,5):
		ans[mid_pos].append(lst[i])
		mid_pos+=1

def low(lst):
	global ans
	global low_pos
	for i in xrange(4):
		ans[low_pos].append(lst[i:i+3])
		low_pos+=1


def calc(lst):
	for i,item in enumerate(lst):
		#print item
		if i==0:
			up(item)
		elif i==1:
			up(item)
			mid(item)
		elif i==2 or i==3:
			up(item)
			mid(item)
			low(item)
		elif i==4:
			mid(item)
			low(item)
		elif i==5:
			low(item)


count=6
lst=[]
while count:
	count-=1
	temp=[int(i) for i in raw_input().split()]
	lst.append(temp)
calc(lst)
maxi=-9999
for sublist in ans:
	sublist[4]=sum(sublist[4])
	temp=sum(sublist)
	if temp>maxi:
		maxi=temp
print(maxi)
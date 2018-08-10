from collections import deque
def construct(n,target):
	#n=number of edges in graph
	n1=n+1
	m = n-1
	adj_list={}
	while n1:
		adj_list[n1]=[]
		n1-=1

	m=n
	nodes_already_inserted=[1]
	while m:
		m-=1
		a,b=[int(i) for i in raw_input().split()]

		if b in nodes_already_inserted:
			adj_list[b].append(a)
		else:
			adj_list[a].append(b)

		if b not in nodes_already_inserted:
			nodes_already_inserted.append(b)
			#print nodes_already_inserted
	

	print adj_list
	print bfs(n,1,adj_list,target)


def bfs(n,s,adj_list,target):
	level=[None]*9999
	vis=[0]*9999
	q=deque()
	q.append(s)
	level[s]=0
	vis[s]=1
	#ans=0
	while(len(q)):
		temp=q.popleft()
		#q_count+=1
		for i_nodes in (adj_list[temp]):
			#print "--",temp,adj_list[temp],i
			if(vis[i_nodes] == 0):
				#print "here",level[adj_list[temp][i]],level[temp]
				level[i_nodes]=level[temp]+1
				q.append(i_nodes)
				vis[i_nodes]=1
	return level[target]



test_cases=int(raw_input())
while test_cases:
	test_cases-=1
	target,edges=[int(i) for i in raw_input().split()]
	construct(edges,target)

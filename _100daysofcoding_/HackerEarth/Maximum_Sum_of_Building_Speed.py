def merge(l,r,a):
    nl=len(l)
    nr=len(r)
    i,j,k=0,0,0
    while (i<nl and j<nr):
        if (r[j]<=l[i]):
            a[k]=r[j]
            j=j+1
        else:
            a[k]=l[i]
            i=i+1
        k=k+1
    while (i<nl):
        a[k]=l[i]
        i=i+1
        k=k+1
    while (j<nr):
        a[k]=r[j]
        j=j+1
        k=k+1
    #print a,"---",l,"---",r
    

def mergesort(a):
    n=len(a)
    if n<2:
        return a
    mid=n/2
    left=a[:mid]
    right=a[mid:]
    mergesort(left)
    mergesort(right)
    merge(left,right,a)
    return a

n=int(raw_input())
lst=[int(i) for i in raw_input().split()]


sorted_lst=mergesort(lst)
ans,count=0,0

while count<len(sorted_lst):
    count+=2
    ans+=min(sorted_lst[count-2:count])
print ans
x,y=[int(i) for i in raw_input().split()]
lst=[int(i) for i in raw_input().split()]
print(' '.join([str(i) for i in (lst[y:]+lst[:y])]))
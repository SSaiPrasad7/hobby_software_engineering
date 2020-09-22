#sum of odd position of frequency of each element present in array
a=[1, 2, 3, 5, 2, 9, 7, 3, 5]
b=set(a)
ac=[]
sum=0
for i in b:
    ac.append(a.count(i))
for i in range(0,len(ac),2):
    sum+=ac[i]
print(b,ac,sum)
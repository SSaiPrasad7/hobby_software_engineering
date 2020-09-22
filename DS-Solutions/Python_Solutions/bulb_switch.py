bulbs=[0,1,0,1]
sum=0
count=0
for i in bulbs:
    sum+=i
if sum==len(bulbs):
    print(0)
else:
    for i in range(0,len(bulbs)):
        if bulbs[i]==0:
            bulbs[i+1:]=not(bulbs[i+1:])
            count+=1
        else:
            continue
print(bulbs)
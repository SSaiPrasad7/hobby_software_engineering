#Brute Force Approach
arr=[7,2,7,2,3,7,7,2,7]
d={}
for i in arr:
    if i in d:
        d[i]+=1
    else:
        d[i]=1
max_count = 0
res = -1
for i in d:  
    if (max_count < d[i]):  
        res = i 
        max_count = d[i]    
print(f"{res} is repeated {d[res]} times.")

#Moore’s Voting Algorithm
def func(a):
    count=1
    maj=0
    for i in range(len(a)):
        if a[maj]==a[i]:
            count+=1
        else:
            count-=1
        if count==0:
            maj=i
            count=1
    return a[maj]
b=func(arr)
count=arr.count(b)
print(f"{b} is repeated {count} times.")

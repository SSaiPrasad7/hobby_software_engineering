arr=[4, 2, -3, 1, 6]
n=len(arr)
subarr=[0 for i in range(n )]
subarr[0]=arr[0]
for i in range(1,len(arr)):
    subarr[i]=subarr[i-1]+arr[i]
print(subarr)
    

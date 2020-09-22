arr=[1,2,3,4,5,5,5,6,6,7,11]
i,j=0,len(arr)-1
n=11
ans=0
while i<j:
    if (arr[i]+arr[j])<n:
        i+=1
    elif (arr[i]+arr[j])>n:
        j-=1
    else:
        x = arr[i]
        xx = i
        while (i < j and arr[i] == x):
            i += 1
        y = arr[j]
        yy = j
        while (j >= i and arr[j] == y):
            j -= 1
        if (x == y):
            temp = i - xx + yy - j - 1
            ans += (temp * (temp + 1)) // 2
        else:
            ans += (i - xx) * (yy - j)
print(ans)
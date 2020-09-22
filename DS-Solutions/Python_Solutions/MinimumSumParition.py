def swap(arr,left,position):
    res=arr
    res[left],res[position]=res[position],res[left]
    return arr


def breakIntoTwo(value, left, right):
    sol=9999
    for i in range(left,right-1):
        firstset=value[left:i+1]
        secondset=value[i+1:len(value)]
        ans=abs(sum(firstset)-sum(secondset))
        if ans<sol:
            sol=ans
    return sol

def Partition(arr,left,right):
    sol = 9999
    for i in range(0,len(arr)):
        value=swap(arr,left,i)
        ans=breakIntoTwo(value,left,right)
        if ans<sol:
            sol=ans
    return sol
if __name__ == '__main__':
    arr=[36,7,46,40]
    print(Partition(arr,0,len(arr)-1))

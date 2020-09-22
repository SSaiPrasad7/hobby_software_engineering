def permute(a,left,right):
    if left==right:
        string="".join(a)
        print(string)
    else:
        for i in range(left, right):
            a[left], a[i] = a[i], a[left]
            permute(a, left + 1, right)
            a[left], a[i] = a[i], a[left]

if __name__ == '__main__':
    string = "ABC"
    n = len(string)
    a = list(string)
    permute(a, 0, n)

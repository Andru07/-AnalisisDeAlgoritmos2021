t = int(input())
for i in range(t):
    n,x,y = map(int,input().split())
    ans = 0
    a2 = 0
    for j in range(n-1,0,-1):
        if((x-y)%j==0):
            ans = (y-x)//j
            a2 = j
            break
    a1 = x//ans+1
    if(a1+a2>n):
        a1 = n-a2
    fir = x-ans *(a1-1)
    if(fir==0): fir+=ans
    for j in range(n):
        print(fir+j*ans,end = " ")
    print()

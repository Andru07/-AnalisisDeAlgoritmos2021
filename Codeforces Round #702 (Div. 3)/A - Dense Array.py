t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
    ans = 0
    for i in range(n-1):
        if l[i]>l[i+1]:
            ptr = l[i+1]
            while ptr*2 < l[i]:
                ptr*=2
                ans+=1
        else:
            ptr = l[i]
            while ptr * 2 < l[i+1]:
                ptr *= 2
                ans += 1
    print(ans)
t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    for i in range(n):
        l[i] = (l[i],i)
    l = sorted(l)
    l = list(reversed(l))
    ret = [0]*n
    for i in range(n):
        ans = 0
        a = -1
        b = n
        for j in range(i):
            if l[i][1]> l[j][1]:
                if a<l[j][1]:
                    a = max(a,l[j][1])
                    ans+=1
            else:
                if b>l[j][1]:
                    b = min(b,l[j][1])
                    ans+=1
        ret[l[i][1]] = ans
    for i in ret:
        print(i,end = " ")
    print()
t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    sm = 0
    for i in range(n):
        l[i] = (l[i],i)
        sm +=l[i][0]
    l = sorted(l)
    ans = l[-1][0]
    ar = []
    for i in range(n-2,-1,-1):
        sm-=l[i+1][0]
        if sm < l[i+1][0]:
            break
        else:
            ans = l[i][0]
    for i in l:
        if i[0] >=ans:
            ar.append(i[1])
    ar = sorted(ar)
    print(len(ar))
    for i in ar:
        print(i+1,end = " ")
    print()
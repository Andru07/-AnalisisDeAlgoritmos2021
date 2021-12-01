t =int(input())
for _ in range(t):
    n,k = map(int,input().split())
    l = list(map(int,input().split()))
    l1 = []
    for i in range(n):
        if l[i]%k!=0:
            l1.append(l[i]%k)
    l1 = sorted(l1)
    if len(l1)==0:
        print(0)
        continue
    s = 1
    ms = 1
    w = l1[0]
    for i in range(1,len(l1)):
        if l1[i]==l1[i-1]:
            s+=1
        else:
            s =1
        if s>ms:
            ms= s
            w = l1[i]
    print(k*(ms-1)+k-w+1)
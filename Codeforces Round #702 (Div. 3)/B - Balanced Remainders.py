t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    c0 = 0
    c1 = 0
    c2 = 0
    for i in l:
        if i%3==0:
            c0+=1
        elif i%3==1:
            c1+=1
        else:
            c2+=1
    ned = n//3
    ans = 0
    for i in range(10):
        if(c0>ned):
            c0,c1,ans = ned,c1+c0-ned,ans+c0-ned
        if(c1>ned):
            c1,c2,ans = ned,c2+c1-ned,ans+c1-ned
        if (c2 > ned):
            c2, c0,ans = ned, c0 + c2 - ned,ans+c2-ned

    print(ans)
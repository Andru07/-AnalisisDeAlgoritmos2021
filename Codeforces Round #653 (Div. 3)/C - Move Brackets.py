t= int(input())
for i in range(t):
    n = int(input())
    s = list(input())
    c = 0
    mn = 0
    for j in range(n):
        if s[j]=="(":
            c+=1
        else:
            c-=1
        mn = min(c,mn)
    print(abs(mn))
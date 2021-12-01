t = int(input())
for i in range(t):
    n = int(input())
    tw = 0
    th = 0
    while n%2==0:
        n/=2
        tw+=1
    while n%3==0:
        n/=3
        th+=1
    if n==1 and th>=tw:
        print(th-tw+th)
    else:
        print(-1)
t = int(input())
for i in range(t):
    x,y,n = map(int,input().split())
    if n%x>=y:
        print(max(0,n-n%x+y))
    else:
        print(max(0,n-n%x-x+y))
from math import *

t = int(input())
for i in range(t):
    a,b,x,y,n = map(int,input().split())
    a1 = max(a-n,x)
    n1 = max(n-(a-x), 0)
    b1 = max(b - n1, y)
    b2 = max(b - n, y)
    n2 = max(n-(b - y), 0)
    a2 = max(a - n2, x)
    print(min(a1*b1,a2*b2))